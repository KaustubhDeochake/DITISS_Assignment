#include <stdio.h>

void dectobin(int num) {
    if (num > 1)
        dectobin(num / 2);
    
    printf("%d", num % 2);
}

void dectooct(int num) {
    if (num == 0)
        return;
    
    dectooct(num / 8);
    printf("%d", num % 8);
}

void dectohexa(int num) {
    if (num == 0)
        return;
    
    dectohexa(num / 16);
    
    int remainder = num % 16;
    if (remainder < 10)
        printf("%d", remainder);
    else
        printf("%c", 'A' + remainder - 10);
}

int main() {
    int num;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    printf("Given Number: %d\n", num);

    printf("Binary equivalent: ");
    dectobin(num);
    
    printf("\nOctal equivalent: ");
    dectooct(num);

    printf("\nHexadecimal equivalent: ");
    dectohexa(num);

    return 0;
}
