#include<stdio.h>
#include<string.h>

// Q1. Write a program to take a string as input from the user and print it.

int main (){
    char str[50];
    printf("Enter the string :");
    fgets(str,sizeof(str), stdin);
    printf("You entered :%s\n", str);
    return 0;
}

// Q2. Write a program to find the length of a string without using the strlen() function.

int main (){
    char str[50] = "Hello";
    int length = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
       length ++;
    }
    printf("Length : %d\n ", length);
    return 0;
}

// Q3. Write a program to copy one string into another without using the strcpy() function.

int main() {
    char str[50] = "CProgramming";
    char str1[50];

    for (int i = 0; str[i] != '\0'; i++) {
        str1[i] = str[i];
    }

    str1[12] = '\0';

    printf("Copied String: %s\n", str1);

    return 0;
}
