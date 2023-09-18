Can i use counting semaphores in critical section?
===================================================

Counting semaphores are not used to enforce mutual exclusion because they enable multiple threads of execution in the critical region at once.

Instead, they are used to enforce limits in certain code.

They are not used much in the kernel.
