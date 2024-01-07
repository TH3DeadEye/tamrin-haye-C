#include <stdio.h>

void fibonacci_series(int n){
    int first = 0, second = 1, next;

    next = first + second;

    while (next <= n){
        printf(", %d", next);
        first  = second;
        second = next;
        next = first + second;
    }
    printf("\n");
}
void main(){
    int number;
    scanf("%d", &number);

    fibonacci_series(number);

    
}