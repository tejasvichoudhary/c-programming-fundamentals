// Q1. Write a program to take 5 integers as input from the user and print them back on the screen.
#include <stdio.h>

int main(){
    int arr[5];
for (int i = 0; i < 5; i++)
{
    printf("Enter the array :");
    scanf("%d" ,&arr[i]);
}
printf("You entered :\n");
for (int i = 0; i < 5; i++)
{
    printf("%d", arr[i]);
}

return 0;
}

// Q2. Write a program to calculate the sum of all elements in an array.

int main(){
    int arr[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        printf("Sum :%d" , sum);
        sum += arr[i];
    }
    return 0;
}
// Q3. Write a program to find the largest and smallest numbers in an array.

int main() {
    int arr[] = {3, 8, 2, 9, 6};
    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > maximum) {
            maximum = arr[i];
        }

        if (arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    printf("Maximum: %d\n", maximum);
    printf("Minimum: %d\n", minimum);

    return 0;
}


