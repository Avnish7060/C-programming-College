#include<stdio.h>
int main(){
    int a,b,temp;
    printf("Enter the first number: ");
    scanf("%d",&a);
    printf("Enter the second number: ");
    scanf("%d",&b);

    printf("The Entered number before swap:\n A = %d \n B = %d",a,b);

    temp = a;
    a = b;
    b = temp;

    printf("\nThe Number after swap is:\n A = %d\n B = %d",a,b);
}