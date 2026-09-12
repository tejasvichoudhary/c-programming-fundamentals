#include <stdio.h>

int main(){
    int age = 24;
    char grade = 'A';

    printf("There is a age %d\n  There is a grade %c\n",  age , grade);
    return 0;
}

int main(){

    int a, b;
    
    printf("Value one :", a);
    scanf("%d", &a);

    printf("Value two :", b);
    scanf("%d", &b);

    printf("Adding the values : %d", a + b);
    
    return 0;
}

int main(){

    int a = 10 , b = 20;
   int temp;
    printf("Before swap values :%d, %d\n", a , b);

    temp = a;
    a = b;
    b = temp;
    printf("After swap values :%d, %d\n", a , b);
        return 0;
}

int main(){
    float pi = 3.1416;
    int r;

    scanf("%d", &r);
    printf("area of a circle : %f", pi * r * r);
    return 0;

}