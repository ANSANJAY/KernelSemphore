int down_timeout(struct semaphore *sem, long jiffies);

	Attempts to acquire the semaphore.

	If no more tasks are allowed to acquire the semaphore, calling this function will put the task to sleep.

	If the semaphore is not released within the specified number of jiffies, this function returns -ETIME.

	It returns 0 if the semaphore was acquired.
