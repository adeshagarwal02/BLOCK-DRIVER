#include"header.h"
#include"declaration.h"
static void __exit clean(void)
{
        printk(KERN_INFO "%s: driver_unregister\n",__func__);
        unregister_blkdev(majorno,BDEVNAME);
}
module_exit(clean);

