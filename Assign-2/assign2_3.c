//WAP to find who scored first “99” in an array marks
#include <stdio.h>

int main() {
    int n;  
    int i;
    int A = 0; 

    printf("Enter the number of students: ");
    scanf("%d",&n);

    int marks[n];

    for (i=0;i<n;i++) {
        printf("Enter marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
    }

    for (i=0;i<n;i++) {
        if (marks[i]==99)
        {
            A=1;  
            printf("Student %d has scored 99 marks.\n",i+1);
            break;  
        }
    }

    if (!A) {
        printf("No student has scored 99 marks.\n");
    }

    return 0;
}

