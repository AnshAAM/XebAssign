//WAP to find sum of all scores in Marks array
#include <stdio.h>

int main() {
    int n; 
    int i;
    int A=0;  

    printf("Enter the number of students: ");
    scanf("%d",&n);

    int marks[n]; 

    for (i=0;i<n;i++) {
        printf("Enter marks for student %d:",i+1);
        scanf("%d",&marks[i]);
    }

    for (i=0;i<n;i++) 
    {
        A+=marks[i];  
    }

    printf("The sum of the marks of students are: %d\n",A);

    return 0;
}
