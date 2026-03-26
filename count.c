#include <stdio.h>

int main(){
    int count = 0;
    int n= 12245698;

    while(n !=0){
        n = n/10;
        count++;;
    }
    printf("%d", count);
}