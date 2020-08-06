#include <stdio.h>

int walkLine(int a, int b, int n);

void walkLineDemo(int n);

long long walkTail(int a, int b, long long n);

void walkTailDemo(long long n);

int main() {
    //walkLineDemo(200000);
    walkTailDemo(10000);
}

void walkLineDemo(int n) {
    int ret;
    ret = walkLine(1, 1, n);
    printf("walkLine : %d \n", ret);
}

int walkLine(int a, int b, int n) {
    if (n == 1) {
        return 1;
    }

    return a + walkLine(b, a + b, n - 1);
}


void walkTailDemo(long long n) {
    long long ret;
    ret = walkTail(1, 1, n);
    printf("walkTail : %lld \n", ret);
}

long long walkTail(int a, int b, long long n) {
    if (n == 0) {
        return a;
    }

    return walkTail(b, a + b, n - 1);
}