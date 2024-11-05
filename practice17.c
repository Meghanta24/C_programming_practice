# include <stdio.h>
// declaratio/prototype
void printHello();
void printGoodbye();
int main() {
    printHello();// fucntion call
    printGoodbye();
    return 0;
}
// function definition
void printHello() {
    printf("Hello!\n");
}
void printGoodbye() {
    printf("Goodbye\n");
}