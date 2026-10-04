#include <stdio.h>

int main() {
    int marks;

    // Prompt user for input
    printf("Enter your marks (0-100): ");
    
    // Validate that input is actually a valid integer
    if (scanf("%d", &marks) != 1) {
        printf("Error: Please enter a valid numerical value.\n");
        return 1;
    }

    // Check for out-of-bounds inputs
    if (marks < 0 || marks > 100) {
        printf("Error: Marks must be between 0 and 100.\n");
        return 1;
    }

    // Direct streamlined grade logic
    if (marks >= 90) {
        printf("Your grade: A\n");
    } else if (marks >= 80) {
        printf("Your grade: B\n");
    } else if (marks >= 70) {
        printf("Your grade: C\n");
    } else if (marks >= 60) {
        printf("Your grade: D\n");
    } else {
        printf("Your grade: F\n");
    }

    return 0;
}
