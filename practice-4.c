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
    printf("Enter any character: \n");
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
// Q7. A student is eligible for admission if:
#include <stdio.h>

int main() {
    int total, maths, physics, chemistry;

    printf("Enter marks of math, physics, and chemistry:\n");
    scanf("%d %d %d", &maths, &physics, &chemistry);

    total = maths + physics + chemistry;

    if (maths >= 60 && physics >= 50 && chemistry >= 40 && total >= 200) {
        printf("Eligible for admission\n");
    } else {
        printf("Not eligible for admission\n");
    }

    return 0;
}

// Q8. Write a program that asks for a username and password (hardcode both), and prints “Login Successful” if both match, otherwise “Access Denied”. Use an if-else statement.

int main(){
   char username;
   int password;
   printf("Enter username (a single letter):\n");
    scanf(" %c", &username);
    
    printf("Enter password:\n");
    scanf("%d", &password);
     
    if (username == 'A' && password == 1234) 
    {
        printf("Login Successful\n");
    } 
    else 
    {
       printf("Access Denied\n");
    }
    
    return 0;
}

// Q9. Write a program that takes a number and prints whether it lies between 1–10, 11– 20, or greater than 20 using an if-else-if ladder.

int main(){
    int num;
printf("Enter num :\n");
    scanf("%d", &num);

     if ( num >= 1 && num <= 10 )
     {
        printf("Number is between 1 to 10\n");
     } else if (num >= 11 && num <= 20)
     {
        printf("Number is between 11 to 20\n");
     
     } else{
        printf(" Number is greater then 20\n");
     }
return 0;
}

// Q10. Recreate the grading system (Exercise 3) using a switch statement by dividing the marks by 10 and matching the integer value.

int main (){
    int a , b;
    printf("Enter marks :\n");
    scanf("%d", &a );
    b = a / 10;
    switch (b){
        case 10:
        case 9:
            printf("The grade is A\n");
            break;
        case 8: 
            printf("The grade is B\n");
            break;
        case 7:  
            printf("The grade is C\n");
            break;
        case 6: 
            printf("The grade is D\n");
            break;
        default: 
            printf("The grade is Fail\n");
            break;
    }
    return 0;
}


    
