#include <stdio.h>
void countdown(int n){
    if(n == 0){
        return;
    }
    printf("%d\n",n);
    countdown(n - 1);
    
}
int main(){
    int num;
    printf("Enter the starting number: ");
    scanf("%d",&num);
    countdown(num);
}