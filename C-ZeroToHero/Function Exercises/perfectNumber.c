#include <stdio.h>
#include <stdlib.h>
void perfect(long long number){
    long long i;
    long long result = 0;
    for (i=1;i<number;i++) {
        if (number%i==0) {
            result+=i;
        }
    }
    if (result==number) {
        printf("Your Number Is A Perfect Number.\n");
    }
    else{
        printf("Your Number Isn't A Perfect Number.\n");
    }
    
}
int main(){
    long long number;
    printf("Enter A Integer : ");
    scanf("%lld",&number);
    perfect(number);
}
