#include"header.h"
#include"declaration.h"
unsigned int majorno = MAJORNO;
static int __init init_func(void)
{
        printk(KERN_INFO "%s: Hello Kernel\n",__func__);
        majorno=register_blkdev(majorno,BDEVNAME);

        return 0;
}
module_init(init_func);
