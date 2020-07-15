


#include <stdio.h>

int add(int a, int b);
extern int max;//外部变量，extern加不加都行
main() {
    add(2, 3);
}

int add(int a, int b) {

    printf("%d \n", a + b);
    printf("%d \n", max);
}