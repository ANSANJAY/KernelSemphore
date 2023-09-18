#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/semaphore.h>

MODULE_LICENSE("GPL");

struct semaphore mysem;

static int __init test_hello_init(void)
{
    sema_init(&mysem, 1);
    pr_info("mysem.count:0x%x\n", mysem.count);
    down(&mysem);
    pr_info("mysem.count:0x%x\n", mysem.count);
    //up(&mysem);
    //pr_info("mysem.count:0x%x\n", mysem.count);
    down(&mysem);
    pr_info("mysem.count:0x%x\n", mysem.count);
    return -1;
}

static void __exit test_hello_exit(void)
{
}

module_init(test_hello_init);
module_exit(test_hello_exit);
