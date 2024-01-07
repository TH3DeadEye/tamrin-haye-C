#include <stdio.h>
#include <ctype.h>

void main(){
    char InputString[100]; //100 mitone harchi bashe
    int i;
    scanf("%s", &InputString);

    for (i =0; InputString[i] != '\0'; i++){
        InputString[i] = tolower(InputString[i]);
    }
    printf("%s\n", InputString);

}