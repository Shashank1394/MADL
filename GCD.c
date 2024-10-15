// GCD

#include <stdio.h>

int main() {
    printf("\nEnter two numbers: ");
    int a, b; scanf("%d%d", &a, &b);

    int result = ((a < b) ? a : b);
    while(result > 0) {
        if(a % result == 0 && b % result == 0)
            break;
        result--;  
    }
    printf("GCD of %d & %d is %d.\n", a, b, result);
    return 0;
}