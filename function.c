#include <stdio.h>

//sum of two numbers using function

int sum(int a, int b){
    int c = a+b;

    return c;
}

int main(){

    int x = 10;
    int y = 15;

    int z  = sum(x,y);

    printf("%d", z);
}

// Checking the numbers are even or odd by using function

int evenodd(int a){
    if(a%2 == 0){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int x = 22;

    int y = evenodd(x);

    if(y == 1){
        printf("Even");
    } else{
        printf("Odd");
    }
}

long long fact(int a){
    long long mul = 1;
    for(int i = 1; i<=a; i++){
     mul = mul*i;
    }
    return mul;
}

int main(){
    int x = 15;

    long long y = fact(x);

    printf("%lld", y);
}

// reversing a number using function

int rev(int a){
    int reverse = 0;

    while (a != 0){
        int digit = a % 10;
        reverse = reverse * 10 + digit;
        a = a / 10;
    }

    return reverse;
}
int main(){
    int x = 122563;

    int reverse = rev(x);

    printf("Reversed number is %d", reverse);
}