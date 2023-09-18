Implementation
=================
kernel/locking/semaphore.c

Data structures
===============

Header File: <linux/semaphore.h>

Data structures: struct semaphore

struct semaphore {
        raw_spinlock_t          lock;
        unsigned int            count;
        struct list_head        wait_list;
};

lock - spinlock for a semaphore data protection;
count - amount available resources;
wait_list - list of processes which are waiting to acquire a lock.


Methods
================

Initialization:

	Dynamic:
        void sema_init(struct semaphore *sem, int val);

                where val is the initial value to assign to a semaphore.

	Static: 
	DEFINE_SEMAPHORE(name)

		#define DEFINE_SEMAPHORE(name)  \
		struct semaphore name = __SEMAPHORE_INITIALIZER(name, 1)

	P       --> down        --> Decrements the value of the semaphore
        V       --> up          --> Increments the value of semaphore

        void down(struct semaphore *sem);
        void up(struct semaphore *sem);


