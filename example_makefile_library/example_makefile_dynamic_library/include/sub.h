#ifndef _SUB_H
#define _SUB_H

struct hook {
    void (*get_number) (int* number);
};

void AttachHook(struct hook* hook_to_attach);
void print_hello_world(void);
void print_number_with_hook(void);
void print_number_with_prototype(void);

void get_number_prototype(void);

#endif /* _SUB_H */