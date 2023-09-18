int down_interruptible(struct semaphore *sem);

down vs down_interruptible
===========================

	down() places the calling process in the TASK_UNINTERRUPTIBLE state when it sleeps.

	down_interruptible() places the calling process to sleep in the TASK_INTERRUPTIBLE state

	 If the task receives a signal while waiting for the semaphore, it is awakened and down_interruptible() returns -EINTR.

