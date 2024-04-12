//WAP to print Fibonacci series up to given numbers
#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;
    
    printf("Fibonacci series up to %d:\n", n);
    printf("%d ", a);
    printf("%d ", b);
    
    for (int i = 2; i <= n; i++) {
        c = a + b;
        if (c > n)
            break;
        printf("%d ", c);
        a = b;
        b = c;
    }
}

int main() {
    int limit;
    
    // Input the limit
    printf("Enter the limit: ");
    scanf("%d", &limit);
    
    // Print Fibonacci series
    fibonacci(limit);
    
    return 0;
}
