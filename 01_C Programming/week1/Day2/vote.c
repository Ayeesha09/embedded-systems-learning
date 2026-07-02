#include <stdio.h>
int main(){
    printf("Enter your age:");
    int age,remaining;
    scanf("%d",&age);
    if (age>=18){
        printf("As your age is %d, congratualtions!,you are eligible to vote",age);
    }
    else{
        remaining=18-age;
        if (remaining==1){
            printf("Sorry you will be eligible to vote after %d year",remaining);
        }
        else{
            printf("Sorry you will be eligible to vote after %d years",remaining);
        }
    }
    return 0;
}