#include <stdio.h>

void big()
{
    int num1, num2, num3;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    // Find the largest number
    if (num1 >= num2 && num1 >= num3) {
        printf("The biggest number is %d\n", num1);
    } else if (num2 >= num1 && num2 >= num3) {
        printf("The biggest number is %d\n", num2);
    } else {
        printf("The biggest number is %d\n", num3);
    }

   // return 0;
}
