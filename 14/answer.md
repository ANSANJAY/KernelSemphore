Which one to choose for critical region: spin lock vs semaphore?
====================================================================

	1. Sleep: Semaphore is the only option. 

	2. Lock hold time: Sempahores are good for longer lock hold times
			   Spinlocks are useful when the lock hold time is small

	3. Scheduling latency: As semaphores do not disable kernel preemption, scheduling latency is better
			       when compared to spinlocks.			  
