//WAP to read two integers and print their HCF (Highest Common Factor).

#include <stdio.h>

int calculation(int num1, int num2) {
    while (num2!= 0) {
        int remainder = num1%num2;
        num1=num2;
        num2=remainder;
    }
    return num1; 
}

int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    int hcf = calculation(num1, num2);
    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf);
    
    return 0;
}