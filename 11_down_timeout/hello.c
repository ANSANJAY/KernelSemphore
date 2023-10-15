#include <linux/kernel.h>
#include <linux/module.h>
#include <linux/semaphore.h>

MODULE_LICENSE("GPL");

struct semaphore mysem;

static int __init test_hello_init(void)
{
    int ret;
    sema_init(&mysem, 2);
    pr_info("mysem.count:0x%x\n", mysem.count);
    ret = down_timeout(&mysem, 1000);
    pr_info("mysem.count:0x%x\t ret:%d\n", mysem.count, ret);
    ret = down_timeout(&mysem, 1000);
    pr_info("mysem.count:0x%x\t ret:%d\n", mysem.count, ret);
    ret = down_timeout(&mysem, 1000);
    pr_info("mysem.count:0x%x\t ret:%d\n", mysem.count, ret);
    return -1;
}

static void __exit test_hello_exit(void)
{
}

module_init(test_hello_init);
module_exit(test_hello_exit);
