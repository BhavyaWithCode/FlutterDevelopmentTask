#include<stdio.h>

int main(){
    int x,y,result;
    
    printf("\nEnter the value of x:- ");
    scanf("%d",&x);
    
    printf("\nEnter the value of y:- ");
    scanf("%d",&y);
    
    result =  (x+y) * (x+y) * (x+y);
    
    printf("\nThe answer is : %d",result);
}