#include<stdio.h>
int main(){
    float price, gstRate;

    printf("Enter the price of item: ");
    scanf("%f",&price);

    printf("Enter the Gst Rate of item: ");
    scanf("%f",&gstRate);

    float gst = price*(1+(gstRate/100));

    printf("The Total Price including GST: %.2f", gst);
}