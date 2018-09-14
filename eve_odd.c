#include <stdio.h>
int main()
{
    int numb;

    printf("Enter an integer: ");
    scanf("%d", &numb);

    // True if the number is perfectly divisible by 2
    if(numb % 2 == 0)
        printf("%d is even.", numb);
    else
        printf("%d is odd.", numb);

    return 0;
}
