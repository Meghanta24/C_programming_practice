# include<stdio.h>
// checking number >9 && <100
int main(){
    int x;
    printf("enter a number :");
    scanf("%d", &x);
    printf("%d", x>9 && x<100);
    return 0;
}