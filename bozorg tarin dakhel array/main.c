#include <stdio.h>
// mohasebe bozorgtarin adad dar yek array Tamrin C

int main(){
    int numberForArray;
    int i;
    printf("Enter your arrays leaght: ");
    scanf("%d", &numberForArray);

    int Array[numberForArray];

    int max = Array[0];
 
        for (i = 0; i < numberForArray; i++) {
            scanf("%d", &Array[i]);
            if (Array[i] > max) {
                max = Array[i];
            }

        }
   printf("The maximum value in the array is: %d\n", max);
}

  
