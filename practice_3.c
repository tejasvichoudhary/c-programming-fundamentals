#include <stdio.h>

// int main(){
//     int a ,b;

//     printf("Enter a number : ");
//     scanf("%d", &a);
//     printf("Enter b number : ");
//     scanf("%d", &b);

//     printf("adding = %d\n difference = %d\n  multiple = %d\n divide = %d\n remander = %d\n ", a + b, a - b , a * b, a / b , a % b );
//     return 0;

// }

// int main(){
//     int a ,b;

//     printf("Enter a number : ");
//     scanf("%d", &a);
//     printf("Enter b number : ");
//     scanf("%d", &b); 

//     printf("checking the number :%d", a > b);
    
//     return 0;

// }
int main(){
    int age , citizen;
     printf("Enter a number : ");
    scanf("%d", &age);
    printf("it he or she is the citizen 1 is yes and 0 is no : ");
    scanf("%d", &citizen);

   int eligible =  (age >= 18) && (citizen == 1);
       printf("checking : %d",eligible );
       return 0;
}