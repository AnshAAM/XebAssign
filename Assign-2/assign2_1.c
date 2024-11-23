//WAP to increase every student mark by 5 & then print the updated array.

#include <stdio.h>

int main() {
    int A;

    printf("Enter the number of students: ");
    scanf("%d",&A);

    int marks[A];

    for (int i=0;i<A;i++)
    {
        printf("Enter marks for student %d:",i+1);
        scanf("%d",&marks[i]);
    }

    for (int i=0;i<A;i++) 
    {
        marks[i]+=5;  
    }

    printf("Updated marks:\n");
    for (int i=0;i<A;i++) 
    {
        printf("Student %d: %d\n",i+1,marks[i]);
    }

    return 0;
}
