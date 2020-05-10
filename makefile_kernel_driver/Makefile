# Environment set up must be done before build
# ARCH,          For exmaple: export ARCH=arm64
# CROSS_COMPILE, For exmaple: export CROSS_COMPILE=aarch64-linux-gnu-
# PATH,          For exmaple: export PATH=$PATH:/path/to/your/toolchain

KERN_DIR = /path/to/kernel

all:
	make -C $(KERN_DIR) M=`pwd` modules 
	# application to build with driver, ( for example app to test the driver)
	$(CROSS_COMPILE)gcc -o drvtest drvtest.c   
clean:
	make -C $(KERN_DIR) M=`pwd` modules clean
	rm -rf modules.order
	rm -f drvtest

# According to drivers/char/ipmi/Makefile
# To build a.c, b.c into ab.ko, you can write:
# ab-y := a.o b.o
# obj-m += ab.o

obj-m += drv.o
