#include<stdio.h>
int main(){
    float f,c;
    printf("Enter the value of temperature in feharnite: ");
    scanf("%f",&f);

    c = (f - 32)*(5.0/9.0);
    printf("The temperature in celcius is: %.2f",c);
}
