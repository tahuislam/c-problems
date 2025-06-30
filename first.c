#include <stdio.h>

int main(){
    printf("Enter centimetres:");
    int centi;
    scanf("%d\n",centi);
    double metres = centi/100;
    printf("In Metres = %d",metres);
    return 0;
}
