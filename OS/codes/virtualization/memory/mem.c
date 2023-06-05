#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char *argv[]) {
    if (argc != 2) { 
        fprintf(stderr, "usage: mem <value>\n"); 
        exit(1); 
    } 
    int *p; 
    p = malloc(sizeof(int));                                      //a1
    assert(p != NULL);
    printf("(%d) addr pointed to by p: %p\n", (int) getpid(), p); //a2
    *p = atoi(argv[1]); // assign value to addr stored in p.      //a3
    while (1) {
        Spin(1);                                                  //a4
            *p = *p + 1;
            printf("(%d) value of p: %d\n", getpid(), *p);
        }
    return 0;
}