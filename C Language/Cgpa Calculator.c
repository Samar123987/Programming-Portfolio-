#include <stdio.h>

int main() {
    int n, i;
    float marks, total = 0.0, cgpa;

    printf("Enter number of subjects: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%f", &marks);
        total += marks;
    }

    cgpa = total / n;
    printf("CGPA: %.2f\n", cgpa);
    
    return 0;
}
