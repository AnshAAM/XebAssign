//WAP to subtract two integers without using Minus (-) operator. (Hint Bitwise operator).

#include <stdio.h>

int subtract(int num1,int num2) {

    while (num2!= 0) {
        int A=(~num1)&num2;
        num1=num1^num2;
        num2=A<<1;
        }
        return num1;  
}

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int result = subtract(num1, num2);

    printf("The result of %d - %d is: %d\n", num1, num2, result);
    
    return 0;
}
