// Q1. Write a function named greet() that prints “Hello, welcome to C programming!”. Call this function from the main() function.
#include <stdio.h>

void greet(){
     printf("Hello, welcome to C programming!");
};

int main(){
    greet();
    return 0;
}

// Q2: Write a function add(int a, int b) that takes two integers as arguments and returns their sum. Call the function from main() and display the result.

int add(int a , int b){
    int sum = a + b;
    return sum;
}

int main(){
    printf("total sum = %d", add(5,7));
    return 0;
}

// Q3. Write a function max(int x, int y) that returns the greater of two numbers. Use this function inside main() to find and print the maximum number.

int max(int x , int y){
    int maximum;
    if (x > y){
        maximum = x;
    } else{
       maximum = y;
    }
    return maximum;
}

int main(){
    printf(" greatest num = %d", max(14 , 24));
    return 0;
}

// Q4. Write a function factorial(int n) that returns the factorial of n . Use a for loop inside the function.

int factorial(int n){
    int mult = 1;

    for (int i = 1; i <= n; i++) {
        mult *= i;
    }
    return mult;
}

int main(){
     printf(" factorial num = %d", factorial(14 ));
    return 0;
}

// Q5. Write a program to show that changes made to a variable inside a function using call by value do not affect the original variable.

int call(int x){
    x = 10;
    return x;
}

int main(void){
    int x = 20;
    printf(" call a function = %d", call(x));
    return 0;
}