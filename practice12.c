# include<stdio.h>
// to skip a number use continue
int main() {
    for(int i=1; i<=10; i++){
        if(i==6){
        continue;
    }
    printf("%d\n",i);
    }
    return 0;
}
