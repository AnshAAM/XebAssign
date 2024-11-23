//WAP to check whether score is even or odd in an array.

#include <stdio.h>

int main() {
    int A; 
    int i;

    printf("Enter the number of students: ");
    scanf("%d",&A);

    int marks[A]; 

    for (i=0;i<A;i++) {
        printf("Enter marks for student %d: ",i+1);
        scanf("%d",&marks[i]);
    }

    for (i=0;i<A;i++) 
    {
        if (marks[i]%2==0) {
            printf("The score %d of student %d is even.\n",marks[i],i+1);
        } else {
            printf("The score %d of student %d is odd.\n",marks[i],i+1);
        }
    }

    return 0;
}
