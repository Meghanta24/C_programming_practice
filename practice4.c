#include<stdio.h>
// to check report of students
int main() {
    int marks;
    printf("enter marks: ");
    scanf("%d",&marks);

    if(marks>=0 && marks <=30) {
        printf("Fail\n");
    }
    else if (marks>=30 && marks<=100) {
        printf("Pass\n");
    }
    else {
        printf("NA");
    }
    return 0;
}