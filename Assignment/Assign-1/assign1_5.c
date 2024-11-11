//WAP to check whether number is Perfect Number or not.

#include <stdio.h>

int perfectno(int num) {
    int sum=0;

    for (int i=1;i<=num/2;i++)
    {
        if (num%i==0) 
        { 
            sum+=i;
        }
    }

    return sum==num;
}

int main() {
    int num;
 
    printf("Enter a number: ");
    scanf("%d", &num);

    if (perfectno(num)) {
        printf("%d is a Perfect Number.\n", num);
    } else {
        printf("%d is not a Perfect Number.\n", num);
    }
    
    return 0;
}
