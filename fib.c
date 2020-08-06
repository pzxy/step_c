#include <stdio.h>

int fib2(int n);

long long fib4(long long n);

int fib_rec(int a, int b, int n);

long long fib_rec_tail(int a, int b, long long n);

int main() {
//    printf("%d \n", fib2(200000));
    printf("%lld \n", fib4(200000));
}

int fib2(int n) {

    return fib_rec(1, 1, n);
}

int fib_rec(int a, int b, int n) {
    if (n <= 1) {
        return 1;
    } else {
        return a + fib_rec(b, a + b, n - 1);
    }
}

long long fib4(long long n) {

    return fib_rec_tail(1, 1, n);
}

long long fib_rec_tail(int a, int b, long long n) {
    if (n == 0) {
        return a;
    } else {
        return fib_rec(b, a + b, n - 1);
    }
}
