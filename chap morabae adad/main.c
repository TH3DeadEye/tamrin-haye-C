#include <stdio.h>
//baranem i benevisid ke 5 adad ra az vorodi bekhanad va jam morabaat anhara print konad

void main(){
    int lenghtOfInputs, i ,array[lenghtOfInputs], sum = 0;
    printf("Enter the lenght of your array:");
    scanf("%d", &lenghtOfInputs);
    printf("enter the %d lenght array: ", lenghtOfInputs);
    for (i =0 ; i < lenghtOfInputs; i++ ){
        
        scanf("%d", &array[i]);
        sum = sum + (array[i] * array[i]);
             
    }
    printf("%d\n", sum);
}