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

// Q4. Write a program to compare two strings without using the strcmp() function.


#include <stdio.h>

int main() {
    char str[50] = "Apple";
    char str1[50] = "Apple";

    int i;

    for (i = 0; str[i] != '\0' && str1[i] != '\0'; i++) {
        if (str[i] != str1[i]) {
            break;
        }
    }

    if (str[i] == '\0' && str1[i] == '\0') {
        printf("Strings are equal");
    } else {
        printf("Strings are not equal");
    }

    return 0;
}

// Q5. Write a program to concatenate two strings without using the strcat() function.
  
int main(){
    char str[50] = "Hello";
    char str1[50] = "World";
    int i, j;

    for ( i = 0; str[i] != '\0'; i++){
       
    }

    for ( j = 0; str1[j] != '\0'; j++){
       str[i + j] = str1[j];
    }
    
    printf("%s", str);
    
return 0;
}