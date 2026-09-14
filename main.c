#include <stdio.h>
 
int main()
{
  printf("Hello World!");  
    return 0;
}

int main(){
  int num = 40;
  float height = 6.1;
  double area = 3.335;
  char grade = 'A';

    printf("Practice the variable : %d\n ", num);
    printf("Practice the variable : %.1f\n ", height);
    printf("Practice the variable : %lf\n ", area);
    printf("Practice the variable : %c\n ", grade);

  return 0;
}

int main(){
  
  int a;
  float b;

  scanf("%d ", &a);
  printf("Taking the input : %d ", a);

  scanf("%f ", &b);
  printf("Taking the input : %f ", b);

  return 0;
}

int main(){
  int a = 5 , b = 10;
  
printf("the value of a + b is %d\n", a + b );
printf("the value of a - b is %d\n", a - b );
printf("the value of a * b is %d\n", a * b );
printf("the value of a / b is %d\n", a / b );
printf("the value of a %% b is %d\n", a % b );
return 0;
}
