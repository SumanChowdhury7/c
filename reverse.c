#include <stdio.h>

int main() {
    int n = 12345;
    int rev = 0;

    while(n != 0){
        int digit = n % 10;
        rev = rev * 10 + digit;
        n = n / 10;
    }

    printf("Reversed number = %d", rev);

    return 0;
}
