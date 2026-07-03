#include <stdio.h>
int main(){
    int age,remaining;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age<0 || age>120){
        printf("not valid");
    }
    else{
        remaining=18-age;
        if (age>=18){
            printf("congrats you are eligible");
        }
        else if (remaining==1){
            printf("after %d year then you are eligible",remaining);
        }
        else{
            printf("after %d years then you are eligible",remaining);
        }
    }
    return 0;
}