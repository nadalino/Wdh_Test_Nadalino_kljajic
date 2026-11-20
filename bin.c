#include <stdio.h>

int strlenght(int bin[]){
    int zeichen;
    for (int i = 0; i < bin[i] ; i++)
    {
        return zeichen = printf("%d", bin[i]);
    }
    return zeichen;
}
int power(int base, int exp){ // Das ist eine funktion die deine Zahl potenziert
    int ergbnis = 1;
    for (int i = 0; i < exp; i++)
    {
        ergbnis = base * ergbnis;
    }
    return ergbnis ;
}

int main(){

    int bin;
    scanf("%d", bin);
    if ( bin != 0 || bin != 1)
    {
        printf("Usage-Information");
        return -1;
    }

    int bit = strlenght(&bin);
    printf("%d", bit);

    return 0;
}