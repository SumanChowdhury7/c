#include <stdio.h>

int main(){
    int fact = 1;
    int n= 10;

    for(int i = 1; i<=n;i++){
        fact = fact*i;
    }

    printf("%lld", fact);
}