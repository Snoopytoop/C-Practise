#include <stdio.h>

int findLargest(int first, int second, int third) {
    if (first > second && first > third) {
        return first;
    } else if (second > first && second > third) {
        return second;
    } else {
        return third;
    }
}

int main() {
    int num1;
    int num2;
    int num3;
    int res;

    printf("Enter your first number: ");
    scanf("%d", &num1);
    printf("Enter your second number: ");
    scanf("%d", &num2);
    printf("Enter your third number: ");
    scanf("%d", &num3);

    res = findLargest(num1, num2, num3);
    printf("Your largest number is: %d\n", res);


    return 0;
}
