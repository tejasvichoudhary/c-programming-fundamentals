#include <stdio.h>
#include <string.h>
 
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

int main(){
  int i = 0;
  while (i < 5){
    printf("Hello World\n");
    i++;
  }
  return 0;
}

int main(){ 
    for (int i = 1; i <= 5; i++) { 
        printf("%d", i); 
    } 
    return 0; 
}
void greet(){
  printf("Hello sabko good night\n");
}

int main(){
  greet();
}

int sum(int a, int b);

int main(){
  int result = sum(5, 6); 
    printf("Total: %d\n", result); 
    return 0;
}

int sum(int a, int b){
  int total;
  total = a + b;
  return total;
}

int add(int a, int b) {
return a + b;
}
int main() {
int sum = add(5, 6);
printf("Sum = %d", sum);
return 0;
}

void change(int x) {
x = 10;
}
int main() {
int a = 5;
change(a);
printf("%d", a); // Answer will be 5
return 0;
}

void change(int *x) {
*x = 10;
}
int main() {
int a = 5;
change(&a);
printf("%d", a); // Answer will be 10
return 0;
}

int factorial(int n){
  if (n == 0){
   return 1;
  }
  
return n * factorial(n - 1);
}

int main (){
  int num = 5;
  printf("The fraction of %d is %d.", num, factorial(num));
  return 0;
}
int main(){
int age[3] = {20,30,40};
age[2] = 30; // it change the value of 40 to 30
printf("Print the first age = %d\n",age[0]);
printf("Print the first age = %d\n",age[1]);
printf("Print the first age = %d\n",age[2]);
}


int main(){
int arr[5];
for (int i = 0; i < 5; i++)
{
  printf("arr[%d]\n", i + 1);
  scanf("%d", &arr[i]);
}
printf("You entered :\n");
for (int i = 0; i < 5; i++){
  printf(" %d\n", arr[i]);
}

return 0;
}

int main(){
  int arr[5] = {10 , 20 , 30 , 40 , 50};
  int sum = 0;
  for (int i = 0; i < 5; i++)
  {
  sum += arr[i];
  }
  printf("Sum = %d", sum);
  return 0;
}

void printArray(int arr[], int size) {
for (int i = 0; i < size; i++) {
printf("%d ", arr[i]);
}
}
int main() {
int numbers[] = {1, 2, 3, 4, 5};
printArray(numbers, 5);
return 0;
}

int main() {
int matrix[2][3] = {
{1, 2, 3},
{4, 5, 6}
};

for (int i = 0; i < 2; i++) {
for (int j = 0; j < 3; j++) {
printf("%d ", matrix[i][j]);
}
printf("\n");
}
return 0;
}

int main (){
  char str[] = {'H', 'e','l','l','o','\0'};
    char str1[] = "Hello";
  printf("%s",str);
  printf("%s", str1);
  return 0;
}

int main (){
  char name[50];
  printf("Enter the name :");
  scanf("%s", name);

  printf("The name is %s\n", name);
return 0;
}

int main (){
  char name[50];
  fgets(name, sizeof(name), stdin);
  printf("Enter the name :%s", name);
  return 0;
}

// Common string function 

int main (){
  char str[50] = "Hello";
  char str1[50] = "World";
  printf("length of an srt : %lu\n", strlen(str));
    strcat(str, str1);
    printf("Concatenated string : %s\n", str);
    strcpy(str1, " C Language");
        printf("Copied String : %s\n", str1 );
    printf("comprison Result: %d\n", strcmp("abc","bca"));
  return 0;
}

int main (){
  char str[] = "CodeWithGem";
    for(int i = 0; str[i] != '\0'; i++){
        printf("%c", str[i]);
    }
  return 0;
}

int main (){
  char name[50];
  printf("Enter your name :");
  fgets(name,sizeof(name), stdin);
  printf("Your name is : %s", name);
  printf(" Length : %zu\n", strlen(name));
  return 0;
}



