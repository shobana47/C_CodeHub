#include <stdio.h>
#include <math.h>
s
int main()
{
    int num,originalNum,remainder,n = 0;
    float result=0.0;

    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;

    while (originalNum != 0)       // Count the number of digits
    {
        originalNum /= 10;
        ++n;
    }
    originalNum=num;

    while (originalNum != 0)         // Check if it's an Armstrong number
     {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    if (result == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }

    return 0;
}
