#include<stdio.h>
int main(){
    float c,f;
    printf("Enter the temperature in Celsius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    printf("Temperature in farhenheit is: %f",f);
    return 0;
}
