#include <linux/module.h>
#include <linux/kernel.h>

//In Every Kernal module needs 2 steps (start)Initi_module and (end)cleanup_module 

int init_module(void)
{
        printk(KERN_INFO "Hello World 1. \n");
        /*
	     * A non 0 return means init_module failed; module can't be loaded.
	     */
        return 0;
}
void cleanup_module(void)
{
        printk(KERN_INFO "Good Bye World 1. \n");
}
