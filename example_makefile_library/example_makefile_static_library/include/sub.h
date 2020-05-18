#ifndef _SUB_H
#define _SUB_H

struct hook {
    void (*get_number) (int* number);
};

void AttachHook(struct hook* hook_to_attach);
void print_hello_world(void);
void print_number_with_hook(void);
void print_number_with_prototype(void);
void call_prototype_without_args(void);

void get_number_prototype(int* number) __attribute__((weak));
int return_number_prototype(void) __attribute__((weak));
#endif /* _SUB_H */