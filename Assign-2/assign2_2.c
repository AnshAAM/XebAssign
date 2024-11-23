//WAP to print grade of students as per their marks given in an array.

#include <stdio.h>

int main() {
    int A;

    printf("Enter total students : ");
    scanf("%d",&A);

    int marks[A];

    for (int i=0;i<A;i++) 
    {
        printf("Enter marks for student %d:",i+1);
        scanf("%d",&marks[i]);
    }

    for (int i=0;i<A;i++) 
    {
        char grade;

        if (marks[i]>=75 && marks[i]<=100)
        {
            grade='A';
        } 
        else if (marks[i]>=60 && marks[i]<75) 
        {
            grade='B';
        } 
        else if (marks[i]>=40 && marks[i]<60) 
        {
            grade='C';
        } 
        else if (marks[i]>=0 && marks[i]<40)
        {
            grade='D';
        }
        else
        {
        printf("Wrong marks%d:%d\n",i+1,marks[i]);
        }

        printf("Student%d,Marks=%d,Grade=%c\n",i+1,marks[i],grade);
    }

    return 0;
}
