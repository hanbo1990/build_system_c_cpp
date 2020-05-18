#include <stdio.h>
#include "include/sub.h"

int return_number_prototype(void) 
{
    return 10;
}

int main(int argc, char* argv[])
{
    print_hello_world();
    print_number_with_hook();
    // print_number_with_prototype();
    call_prototype_without_args();
    return 0;
}
