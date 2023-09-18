int down_trylock(struct semaphore *sem);

If the semaphore is not available at the time of the call, down_trylock returns immediately with a nonzero return value

