#include <stdio.h>

#ifndef ROUTER_C_VERSION
#define ROUTER_C_VERSION "dev"
#endif

int main(void) {
    puts("router-c " ROUTER_C_VERSION);
    return 0;
}
