/*
 * File: hellow.c
 * Created by John Wang on 5/5/22.
*/
#include <stdio.h>

int double_it(int x);

struct point {
    int x;
    int y;
};

struct tip {
    int x;
};

int main(int argc, char *argv[]) {
    printf("Hello world!\n%u", 56 || 12);
    int numbers[3];
    numbers[0] = 1;
    printf("%d %d", double_it(3), numbers[0]);
    struct point x;
    
}

int double_it(int x) {
    return x * 2;
}