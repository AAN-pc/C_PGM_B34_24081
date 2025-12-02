/*
Experiment 4: Variable and Scope of Variable

1. Declare a global variable outside all functions and use it inside various functions 
   to understand its accessibility.

2. Declare a local variable inside a function and try to access it outside the 
   function. Compare this with accessing the global variable from within the function.

3. Declare variables within different code blocks (enclosed by curly braces) and 
   test their accessibility within and outside those blocks.

4. Declare a static local variable inside a function. Observe how its value persists 
   across function calls.
*/

#include <stdio.h>

// 1. Global variable
int global_var = 10;

void demo_global() {
    printf("Inside demo_global, global_var = %d\n", global_var);
}

void demo_local() {
    // 2. Local variable
    int local_var = 5;
    printf("Inside demo_local, local_var = %d\n", local_var);
    // local_var cannot be accessed in main()
}

void demo_block_scope() {
    printf("Entering block...\n");
    {
        // 3. Block scope variable
        int x = 42;
        printf("Inside block, x = %d\n", x);
    }
    // printf("%d", x);  
    printf("Exited block. x no longer exists.\n");
}

void demo_static() {
    // 4. Static local variable
    static int s = 0;
    s++;
    printf("demo_static called, static s = %d\n", s);
}

int main() {
    printf("In main, global_var = %d\n", global_var);

    demo_global();
    demo_local();
    demo_block_scope();

    demo_static(); // prints 1
    demo_static(); // prints 2

    return 0;
}

