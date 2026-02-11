#include <stdio.h>
int main() {
    
    int m1, m2, m3, m4, m5;
    float total, percentage;

    printf("Enter marks for 5 subjects (0-100):\n");
    printf("Subject 1: ");
    scanf("%d", &m1);
    printf("Subject 2: ");
    scanf("%d", &m2);
    printf("Subject 3: ");
    scanf("%d", &m3);
    printf("Subject 4: ");
    scanf("%d", &m4);
    printf("Subject 5: ");
    scanf("%d", &m5);
    total = m1 + m2 + m3 + m4 + m5;
    percentage = (total / 500)*100; 
    printf("\nTotal Marks: %.2f out of 500\n", total);
    printf("Percentage: %.2f%%\n", percentage);
    printf("Grade: ");
    if (percentage >= 85) {
        printf("A\n");
    } 
    else if (percentage >= 70) {
        printf("B\n");
    } 
    else if (percentage >= 50) {
        printf("C\n");
    } 
    else {
        printf("Fail\n");
    }
    return 0;
}

