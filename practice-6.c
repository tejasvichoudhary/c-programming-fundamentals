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

// Q6. Write a function swap(int *x, int *y) that swaps the values of two integers using pointers.

int swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main(void){
    int a,b;
   printf("Enter first number:\n");
   scanf("%d", &a);
   printf("Enter second number:\n");
   scanf("%d", &b);
   swap(&a, &b);
     printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}

// Q7. Write a recursive version of the factorial program using a function factorial(int n).

int factorial(int n){
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}
int main(){
    printf("Enter the number:", factorial(5));
    return 0;
}

// Q8. Write a recursive function fibonacci(int n) that prints the first n terms of the Fibonacci series.

int fibonacci(int n){
   int first = 0;
int second = 1;
int next;
    for (int i = 0; i < n; i++){
       next = first + second ;
       
    } 
    return next;
}

int main(){
    printf("Enter the number:%d", fibonacci(5));
    return 0;
}