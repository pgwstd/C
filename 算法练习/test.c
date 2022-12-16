#include "stdio.h"

#define N 10

int main() {
    int a[N];
    int sum = 0;
    for (int s = 0; s < 10; ++s) {
        scanf("%d", &a[s]);
        if (a[s] % 2 == 0) {
            sum++;
        }
    }
    printf("sum=%d", sum);
    return 0;
}