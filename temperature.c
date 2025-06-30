#include <stdio.h>


int main(){
    int c,f;
    printf("Enter temperature in celcius:");
    scanf("%d",&c);
    f = c*9/5 +32;
    printf("%d degree celcius is %d degree in farehnheit",c,f);
    return 0;
}