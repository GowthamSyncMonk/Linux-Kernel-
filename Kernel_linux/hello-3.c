
/*  
 *  hello-3.c - Illustrating the __init, __initdata and __exit macros.
 */

#include <linux/module.h>/* Needed by all modules */
#include <linux/kernel.h>/* Needed for KERN_INFO */
#include <linux/init.h>/* Needed for the macros */

static int __init_hello3_data __initdata = 3;

static int __init hello_3_init(void)
{
	printk(KERN_INFO "HELLO_WORLD 3.\n");
	return 0;
}
static void __exit hello_3_exit(void)
{
	printk(KERN_INFO "GOOD_BYE_WORLD 3.\n");
}
module_init(hello_3_init);
module_exit(hello_3_exit);
