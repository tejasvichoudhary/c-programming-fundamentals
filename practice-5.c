#include <stdio.h>
// Q1.Write a program using a for loop to print numbers from 1 to 10.

int main(){
    int i;
    for ( i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}
// Q2. Write a program using a while loop that calculates the sum of the first N natural numbers entered by the user.

int main (){
int num;
int total = 0;
printf("Enter : ");
scanf("%d", &num);

int i = 1;
while (i <= num){
    total += i;
    i++;
}
printf("\nTotal = %d", total);
return 0;
}

// Q3. Write a program that takes an integer as input and prints its multiplication table up to 10.

int main (){
    int table;
    printf("Enter the table : ");
    scanf("%d", &table);
    for (int i = 1; i <= 10; i++){
        printf("%d X %d =  %d\n", table, i , table * i );
    }
    return 0;
}

// Q4. Write a program that prints numbers from 10 down to 1 using a while loop.

int main (){
    int i = 10;
    while (i != 0){
       printf("%d ", i);
       i--;
    }
    return 0;
    
}
// Q5. Write a program that takes a number as input and prints its factorial.Use a for loop.
int main (){
int num;
int factorial = 1;
printf("Enter : ");
scanf("%d", &num);

for (int i = 1; i <= num; i++){
   factorial *= i;
}

printf("\nfactorial = %d", factorial);
return 0;
}

// Q6. Write a program that keeps asking the user to enter a positive number until they enter 0. Use a do-while loop.
int main(){
    int num;
do{
printf("Enter : ");
scanf("%d", &num);
   
} while (num != 0);
return 0;
}

// Q7. Write a program that prints the sum of all even numbers between 1 and 20. Use continue to skip odd numbers.

int main (){
    int n = 0;
    for (int i = 1; i <= 20; i++){
       if (i % 2 != 0 ){
        continue;
       } 
        n += i;
    }
    printf("%d", n);
    return 0; 
}

// Q8. Write a program that takes numbers as input continuously. Stop reading and exit the loop as soon as a negative number is entered.

int main() {
    int n;

    while (1) {
        printf("Enter: ");
        scanf("%d", &n);

        if (n < 0) {
            break;
        }
    }
    return 0;
}

// Q9.Write a program to print a square pattern of stars of size n using nested loops.

int main (){
    for (int j = 0; j < 4; j++){
        for (int i = 0; i < 4; i++){
        printf("* ");
    }
    printf("\n");
} 
    return 0;
}
// Q10. Write a program to print the following right triangle pattern using nested loops.
int main (){
    int n;
    printf("enter a number :");
    scanf("%d", &n);
    for (int j = 1; j <= n; j++){
        for (int i = 1; i <= j; i++){
        printf("* ");
    }
    printf("\n");
} 
    return 0;
}
// Q11. Write a program that prints a multiplication table from 1 to 10 in a grid format using nested for loops.

int main(){
    for (int i = 1; i <= 10; i++){
       for (int j = 1; j <= 10; j++){
        printf("%d ", i * j);
       }
       printf("\n");
    }
    return 0;
}