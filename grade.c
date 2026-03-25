#include <stdio.h>
int main(){
    int n;
    printf("Enter your marks: ");
    scanf("%d", &n);

    if(n>80 && n<=100){
        printf("Grade A");
    } else if(n>60 && n<=79){
        printf("Grade B");
    } else if (n>40 && n<=59){
        printf("Grade B");
    } else if (n<40){
        printf("Fail");
    } else{
        printf("Invalid number");
    }
    return 0;
}