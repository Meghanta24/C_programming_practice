#include<stdio.h>
//print FACTORIAL of a number n(applicable for small number,big number wont work)
int main() {
    int n;
    printf("enter a number: ");
    scanf("%d",&n);

    int fact=1;
    for(int i=1; i<=n; i++){
        fact = fact * i;
    }
    printf("final fact is %d", fact);
    return 0;
}