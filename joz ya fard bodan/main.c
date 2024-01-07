#include <stdio.h>

void main(){
    int x;
    scanf("%d", &x);
    if (x %2 == 0){
        printf("%d is Even\n", x);
    }
    else{
            printf("%d is odd\n", x);
    }
}