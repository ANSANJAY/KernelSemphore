Semaphores
===============

Semaphores in Linux are sleeping locks

What happens when the semaphore lock is unavailable
=====================================================

        the semaphore places the task onto a wait queue and puts the task to sleep.

        the processor is then free to execute other code

What happens after the semaphore becomes available
===================================================

        one of the tasks on the wait queue is awakened so that it can then acquire the semaphore.


