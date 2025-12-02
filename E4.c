#include <stdio.h>

int globalVar = 10;

void fun1() {
    printf("Global inside fun1 = %d\n", globalVar);
}

void fun2() {
    static int s = 0;
    s++;
    printf("Static value = %d\n", s);
}

int main() {
    fun1();

    // Block scope
    {
        int x = 5;
        printf("Inside block: %d\n", x);
    }

    fun2();
    fun2();
    fun2();

    return 0;
}
