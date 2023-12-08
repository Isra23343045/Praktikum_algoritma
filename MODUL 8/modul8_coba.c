#include <stdio.h>


void say_hello() {
    printf("Hello, world!\n");
}


void greet(char name[]) {
    printf("Hello, %s!\n", name);
}


int add(int a, int b) {
    return a + b;
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}


int global_value = 7;


void multiply_by_two(int *value) {
    *value *= 2;
}

int main() {
    
    say_hello();

  
    char name[] = "John";
    greet(name);


    int result = add(5, 3);
    printf("5 + 3 = %d\n", result);


    int fact_result = factorial(5);
    printf("5! = %d\n", fact_result);

   
    printf("Global value: %d\n", global_value);
    int value = 4;
    multiply_by_two(&value);
    printf("4 * 2 = %d\n", value);

    return 0;
}