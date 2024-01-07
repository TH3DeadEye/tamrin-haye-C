#include <stdio.h>
// mohasebe moadel tamrin zaban C

int main() {
    int maxnumberOfStudent, i, indexOfMax;
    
    printf("Enter the number of students: ");
    scanf("%d", &maxnumberOfStudent);

    float avg[maxnumberOfStudent];

    if (maxnumberOfStudent > 0) {
        printf("Enter %d student averages:\n", maxnumberOfStudent);

        float max = avg[0];
        indexOfMax = 0;


        for (i = 0; i < maxnumberOfStudent; i++) {
            scanf("%f", &avg[i]);

            if (avg[i] > max) {
                max = avg[i];
                indexOfMax = i;
            }
        }
        printf("Max is: %f and the index of it is: %d\n", max, indexOfMax);
    } else {
        printf("Number of students should be greater than 0.\n");
    }

    return 0;
}
