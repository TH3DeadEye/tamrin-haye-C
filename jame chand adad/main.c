#include <stdio.h>

void main(){
    int i, num, sum = 0, lenght;

    scanf("%d", &lenght);

    for (i = 0;  i < lenght; i++){
        scanf("%d",&num);
        sum += num;
    }
    printf("%d\n",sum);
}