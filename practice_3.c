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

// int main(){
//     int age , citizen;
//      printf("Enter a number : ");
//     scanf("%d", &age);
//     printf("it he or she is the citizen 1 is yes and 0 is no : ");
//     scanf("%d", &citizen);

//    int eligible =  (age >= 18) && (citizen == 1);
//        printf("checking : %d",eligible );
//        return 0;
// }

// int main(){
//     int x = 5;
//     printf("x = %d\n", x);
//     printf("pre-increment %d\n", ++x);
//     printf(" after pre-increment %d\n", x);
//     printf("post-increment %d\n", x++);
//     printf("after post-incrment %d\n", x++);
//     return 0;
// }

// int main(){
//     int a = 5;
//     printf("%d\n", a);
//     a += 5;
//     printf("%d\n", a);
//     a -= 4;
//     printf("%d\n", a);
//     a *= 2;
//     printf("%d\n", a);
//     a /= 2;
//     printf("%d\n", a);
//     a %= 3;
//     printf("%d\n", a);
//     return 0;

// };

int main(){
    int a = 5, b = 2;
    int intresult = a / b;
    float result = (float)a / b;
    printf("%d\n", intresult);
    printf("%.2f\n", result);
return 0;
}