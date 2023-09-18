Types of Semaphore
=====================

Spin locks allow only one task to hold the lock at a time.

With semaphores,number of tasks to hold the lock at a time can be specified while initializing/declaring semaphore

	This value is called as usage count or simply count.

Count = 1	--> 	Binary Sempahore
				Used for mutual exclusion

Count > 1	-->	Counting Semaphore

