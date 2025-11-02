#include <stdio.h>

int main() {
    int N, i = 1;
    int eligibleCount = 0, notEligibleCount = 0;
    float totalPercentage = 0.0;

    printf("Enter total number of students: ");
    scanf("%d", &N);

    while (i <= N) {
        int P;
        float percentage;

        printf("Enter attendance for student %d (out of 30): ", i);
        scanf("%d", &P);

        percentage = (P / 30.0) * 100;
        totalPercentage += percentage;

        printf("Student %d: %.2f%% - ", i, percentage);
        if (percentage >= 75.0) {
            printf("Eligible\n");
            eligibleCount++;
        } else {
            printf("Not Eligible\n");
            notEligibleCount++;
        }

        i++;
    }

    printf("Class Summary:\n");
    printf("Total Students: %d\n", N);
    printf("Eligible Students: %d\n", eligibleCount);
    printf("Not Eligible: %d\n", notEligibleCount);
    printf("Average Attendance: %.2f%%\n", totalPercentage / N);

    return 0;
}
