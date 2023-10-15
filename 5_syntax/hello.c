#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/semaphore.h>
#include <linux/slab.h>

MODULE_LICENSE("GPL");

struct semaphore *mysem;

static int __init test_hello_init(void)
{
    mysem = kmalloc(sizeof(mysem), GFP_KERNEL);
    /* Counter is 1 so binary semaphore */
    sema_init(mysem, 1);
    down(mysem);
    pr_info("Starting critical region\n");
    pr_info("Ending critical region\n");
    up(mysem);
    kfree(mysem);
    return -1;
}

static void __exit test_hello_exit(void)
{
}

module_init(test_hello_init);
module_exit(test_hello_exit);
