#include <stdio.h>
#include "sub.h"

static struct hook* hook_ptr = NULL;

void AttachHook(struct hook* hook_to_attach)
{
    hook_ptr = hook_to_attach;
}

void print_hello_world(void)
{
    printf("%s\n", __func__ );
}

void print_number_with_hook(void)
{
    int number = 0;

    if(NULL != hook_ptr && NULL != hook_ptr->get_number){
        hook_ptr->get_number(&number);
    } else {
        printf("hook does not exist\n");
    }

    printf("%s -> %d\n", __func__, number);
}

void print_number_with_prototype(void)
{
    int number;
    get_number_prototype(&number);
    printf("%s -> %d\n", __func__, number);
}

void call_prototype_without_args(void)
{
    printf("%s %d\n", __func__, return_number_prototype());

}

int return_number_prototype(void)
{
    return 1;
}