#include <stdio.h>

int main() {
    int num1, num2, total;
    
    printf("Enter the first number: ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    total = num1 + num2;
    
    printf("The sum of %d and %d is %d.", num1, num2, total);
    
    return 0;
}
