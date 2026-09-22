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

int main(){
  int a = 5 , b = 10;

  printf(" a == b %d\n", a == b);
  printf("a != b %d\n", a != b);
  printf("a > b %d\n", a > b);
  printf("a < b %d\n", a < b);

  printf("a == b && a == 10 %d\n", ( a == b) && (a == 10));
printf("(a > b) || (b < 20): %d\n", (a > b) || (b < 20));
printf("!(a == b): %d\n", !(a == b));

  return 0;
}

int main (){
  int a = 10;

  a+= 5;
  printf("now the total val : %d\n", a);
 
  a -= 3;
  printf("now the total val : %d\n", a);

  a *= 2;
  printf("now the total val : %d\n", a);

  a/= 2;
  printf("now the total val : %d\n", a);

  a %= 2;
  printf("now the total val : %d\n", a);

  return 0;
}

int main (){
  int a = 5;

  printf("orignal value of a :%d\n", a);
  printf("post-increment a :%d\n", ++a);
  printf("now value of a :%d\n", a);

   a = 5;

  printf("pre-increment of a :%d\n", a++);
  printf("now value of a :%d\n", a);

  return 0;
}
int main (){
  int a = 10 , b = 3;
 float result;

 result = (float) a / b ;

 printf("%.2f\n", result);
 return 0 ;
}
