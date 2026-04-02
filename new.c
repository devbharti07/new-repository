#include <stdio.h>
#include <stdbool.h>

bool isPrime(int x) {
    if (x <= 1) return false;
    if (x <= 3) return true;
    if (x % 2 == 0 || x % 3 == 0) return false;
    for (int i = 5; i * i <= x; i += 6) {
        if (x % i == 0 || x % (i + 2) == 0) return false;
    }
    return true;
}

int main(void) {
    int N;
    long long sum = 0;

    printf("Enter N (sum primes from 2..N): ");
    if (scanf("%d", &N) != 1 || N < 2) {
        printf("Invalid input or no primes in range.\n");
        return 1;
    }

    for (int i = 2; i <= N; i++) {
        if (isPrime(i)) {
            sum += i;
        }
    }

    printf("Sum of all prime numbers <= %d is %lld\n", N, sum);
    return 0;
}