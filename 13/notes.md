Important points while using semaphore
========================================

1. Semaphores are well suited to locks that held for a long time. As the tasks trying to acquire the lock sleep if it is not available.

2. Semaphores are not suited for locks that held for a short time.
	Due to overhead of
		a. sleeping
		b. maintaining the wait queue.
		c. waking back up 

	total time can easily overweigh the total lock hold time.

3. As we sleep if the lock is not available, cannot be used in interrupt context.

4. Semaphores do not disable kernel preemption, and consequently code holding a sempahore can be preempted.

Advantages of semaphore over spinlock
=========================================

	better processor utilization as no time is spent busy looping
