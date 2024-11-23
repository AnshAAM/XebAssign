#include <stdio.h>

int main() {
    int A; 
    int i;

    printf("Enter the number of students: ");
    scanf("%d", &A);

    int marks[A]; 

    for (i = 0; i < A; i++) {
        printf("Enter marks for student %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    int max = marks[0];
    int min = marks[0];

    for (i = 1; i < A; i++) {
        if (marks[i] > max) {
            max = marks[i];
        }
        if (marks[i] < min) {
            min = marks[i]; 
        }
    }

    printf("The maximum score is: %d\n", max);
    printf("The minimum score is: %d\n", min);

    return 0;
}
