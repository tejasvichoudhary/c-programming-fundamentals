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

// Q4. Write a program to reverse the elements of an array.

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = size - 1; i >= 0; i--)
    {
       printf(" Reverse element print : %d\n",arr[i]);
    }
    return 0;
}

// Q5. Write a program that counts how many even and odd numbers are in an array.

int main(void) {
    int arr[] = {2, 5, 7, 8, 10, 11};
    int size = sizeof(arr) / sizeof(arr[0]);

    int even = 0;
    int odd = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);

    return 0;
}

