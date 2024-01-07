#include <stdio.h>

void main(){
    int num;
    scanf("%d", &num);
    if (num < 0){
        num *= -1;
        printf("%d", num);

    }
    else{
        printf("%d", num);
    }
}