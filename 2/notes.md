Implementation
==============
A semaphore is a single integer value combined with a pair of functions that are typically called P and V (Dutch words).

P() ---> Proberen  (test)

V() ---> Verhogen  (increment)

Entering critical section
---------------------------
A process wishing to enter a critical section will call P() on the relevant semaphore

        if the semaphore's value is greater than zero, that value is decremented by one and the process continues. 
        If, instead, the semaphore's value is 0 (or less), the process must wait until somebody else releases the semaphore.

Exiting critical section
-------------------------

        accomplished by calling V()

        this function increments the value of the semaphore and, if necessary, wakes up processes that are waiting


