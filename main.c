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

int main (){
  int age = 20;
  if (age >= 18){
   printf("I am above 18");
  }
  
  return 0;
}

int main (){
  int number = 10;
  if (number % 2 == 0){
   printf("Even number");
  }
  
  return 0;
}

int main(){
  int marks;
  printf("Enter your marks :\n");
  scanf("%d",marks);
  if(marks >= 40){
    printf("You pass the exam :\n");
    
  }
  return 0;
}
int main (){
  int marks = 90;

  if (marks >= 90)
  {
    printf("The grade is A\n");
  } else if (marks >= 80)
  {
    printf("The grade is B\n");
  }else if (marks >= 70)
  {
    printf("The grade is C\n");
  }else if (marks >= 60)
  {
    printf("The grade is D\n");
  } else
  {
   printf("You are fail\n");
  }
  return 0;

}
int main(){
  int age = 25;
  char citizen = "Y";

  if (age >= 18){
    if (citizen == "Y"){
     printf("You are eligible to vote.");
    } else{
      printf("You are not a citizen, so you cannot vote.");
    } } else {
      printf("You are not old enough to vote.");
    }
  
  
}
int main(){
int day = 2;
switch (day) {
case 1:
printf("Monday");
break;

case 2:
printf("Tuesday");
break;

case 3:
printf("Wednesday");
break;

default :
printf("Invalid day");
}

}

int main() {
int i = 1;
while (i <= 5) {
printf("%d\n", i);
i++;
}
return 0;
}

int main() {
  for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
}
return 0;
}
