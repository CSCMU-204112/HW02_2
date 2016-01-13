#include "T112_HW02_2.h"

int main()
{
    int num1;
    int num2;
    int result;

    printf("Please input num1: ");
    scanf("%d", &num1);
    printf("\nPlease input num2: ");
    scanf("%d", &num2);

    result = is_rotation(num1, num2);

    if (result == 1) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}

