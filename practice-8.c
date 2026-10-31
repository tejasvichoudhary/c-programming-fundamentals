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

// Q6. Write a program to count the number of vowels and consonants in a string.


#include <stdio.h>

int main(void) {
    char str[50] = "Programming";
    int vowel = 0;
    int consonants = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' ||
            str[i] == 'i' || str[i] == 'o' ||
            str[i] == 'u') {
            vowel++;
        } else {
            consonants++;
        }
    }

    printf("Vowels: %d\n", vowel);
    printf("Consonants: %d\n", consonants);

    return 0;
}
// Q7. Write a program to reverse a string without using the strrev() function.

int main(void) {
    char str[] = "Harry";
    int length = strlen(str);

    for (int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}

// Q8. Write a program to check whether a given string is a palindrome or not.

int main(void) {
    char str[50] = "madam";
    int length = strlen(str);
    int palindrome = 1;

    for (int i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
     }
    }
    if (palindrome == 1) {
        printf("Palindrome");
    } else {
        printf("Not a palindrome");
    }

    return 0;
}


// Q9. Write a program to count the number of words in a given sentence.

#include <stdio.h>

int main() {
    char str[50] = "I love coding in C";
    int count = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ') {
            count++;
        }
    }
    int word = count + 1;
    printf("Count: %d", word);

    return 0;
}
// Q10. Write a program to convert a string into uppercase and lowercase without using string library functions.

int main (){
    char str[] = "CodeWithTejasvi";
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }

    printf("Uppercase: %s\n", str);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;
        }
    }

    printf("Lowercase: %s\n", str);

    return 0;
}
