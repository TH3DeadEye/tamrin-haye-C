#include <stdio.h>
//tabdil daraje be radian
int degree_to_radian(degree){
    float radian;
    radian = degree * (3.14 / 180);
    printf("%f\n", radian);
    return 0;
}
int main(){
    int degree;
    scanf("%d", &degree);

    degree_to_radian(degree);
    return 0;
}