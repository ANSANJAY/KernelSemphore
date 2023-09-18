int down_killable(struct semaphore *sem);

The down_killable function does the same as the down_interruptible function.

Only the fatal signals can be delivered like kill signal


What are fatal signals?

	Any signal listed with a default action of “terminate” or “dump core” is fatal, unless it’s ignored or handled explicitly.

	Eg. SIGCONT, SIGCHLD, SIGSTP ..


