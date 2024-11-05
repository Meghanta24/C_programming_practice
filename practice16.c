#include<stdio.h>
//print sum of numbers including 5 and 50
int main(){
    int n;
    printf("enter number: ");
    scanf("%d", &n);

    int sum=0;
    for(int i=5;i<=50;i++){
         sum+=i;
    }
    printf("sum is %d",sum);
    return 0;
}