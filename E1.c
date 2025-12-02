#include <stdio.h>

int main() {
    // 1. Hello World
    printf("Hello World\n");

    // 2. Address in multiple lines
    printf("123, Main Street\nCity Name\nCountry\n");

    // 3. Name & age
    char name[50];
    int age;
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Name: %s, Age: %d\n", name, age);

    // 4. Add two numbers
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d\n", a + b);

    return 0;
}
