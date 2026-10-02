// Q1. Write a program that takes an integer from the user and prints whether it is even or odd.

#include <stdio.h>

int main(){
    int number;
    printf("Enter the number: \n");
    scanf("%d", &number);
    if (number % 2 == 0){
       printf(" %dis even\n", number);
    }
     else {
        printf(" %din odd\n", number);
    }
    return 0;
}
// Q2. Write a program that takes two numbers as input and prints the larger one using if-else statement.

int main(){
    int a , b;
    printf("Enter first number :\n");
    scanf("%d", &a);
    printf("Enter second number :\n");
    scanf("%d", &b);
    if (a > b)
    {
       printf("largest number is a %d\n", a );
    } else
    {
       printf("largest number is b %d\n", b );
    }
    return 0;
}

// Q3. Write a program that takes a student’s marks (0–100) and prints the grade as per the following rules:

int main(){
    int a;
    printf("Enter marks :\n");
    scanf("%d", &a);
    if (a >= 90)
    {
        printf("the grade is A");
    } else if (a > 75)
    {
        printf("the grade is B");
    } else if (a > 60)
    {
        printf("the grade is C");
    } else 
    {
        printf("the grade is D");
    }
    return 0;
}

// Q4. Write a program that checks whether a given year is a leap year or not. A leap year is divisible by 4, but not by 100 unless it is also divisible by 400.

int main (){
    int year;
    printf("Enter year :\n");
    scanf("%d", &year);
    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0)
    {
        printf("%d leap year:\n ", year);
    } else {
        printf("%d not a leap year:\n", year);
    }
   return 0; 
}

// Q5. Write a simple calculator program that uses a switch statement to perform operations based on user choice. Operations:

int main(){
   int a , b;
    int operation;
    printf("Enter first number :\n");
    scanf("%d", &a);
    printf("Enter second number :\n");
    scanf("%d", &b);
    printf("Enter operation :\n");
    scanf("%d", &operation);

    switch (operation)
    {
    case 1:
        printf("Addition :%d\n", a + b);
        break;
        case 2:
        printf("subtraction :%d\n", a - b);
        break;
        case 3:
        printf("Multipliation :%d\n", a * b);
        break;
        case 4:
        printf("Divison :%d\n", a / b);
        break;
    default:
    printf("Invalid choice\n");
        break;
    }
return 0;
}

// Q6. Write a program that takes a single character as input and determines whether it is a vowel, consonant, digit, or special character. Use a combination of if-else and logical operators.

int main(){
    char ch;
    printf("Enter any character: ");
    scanf("%c", &ch);
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
    {
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') 
        {
            printf("it is a vowal\n");
        } else
        {
            printf("it is a consonant\n");
        }   
    } else if (ch >= '0' && ch <= '9')
    {
        printf("It is a digit\n");
    } 
    else 
    {
        printf("It is a special character\n");
    }

    return 0;
}
    
