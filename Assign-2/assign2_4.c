#include <stdio.h>

int main() {
    int n; 
    int i;
    int A=0; 

    printf("Enter the number of students: ");
    scanf("%d",&n);

    int marks[n]; 

    for (i=0;i<n;i++) 
    {
        printf("Enter marks for student %d: ",i+1);
        scanf("%d",&marks[i]);
    }

    for (i=0;i<n;i++) {
        if (marks[i]==99) 
        {
            A++; 
            printf("Student %d has scored 99 marks.\n",i+1);
        }
    }

    if (A==0) 
    {
        printf("No student has scored 99 marks.\n");
    } else 
    {
        printf("number of students who scored 99 are : %d\n",A);
    }

    return 0;
}
