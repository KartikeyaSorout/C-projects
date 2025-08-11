#include<stdio.h>
int main() {
    int n, i;
    
    printf("Enter a number: ");
    scanf("%d", &n);

    // Handle edge cases for numbers less than or equal to 1
    if (n <= 1) {
        printf("%d is Not a Prime Number.\n", n);
    }
    else if (n == 2) {  // 2 is a prime number
        printf("%d is a Prime Number.\n", n);
    }
    else if (n % 2 == 0) {  // Check for even numbers greater than 2
        printf("%d is Not a Prime Number.\n", n);
    }
    else if (n % 2!=0) {
            printf("%d is a Prime Number.\n", n);
        } 
        else {
            printf("%d is Not a Prime Number.\n", n);
        }
    
    
    return 0;
}
