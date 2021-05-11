#include <stdio.h>
#include <stdlib.h>
void fibonacci(int a){
    int first=0,second=1,fibofirsecond,i;
    printf("Fibonacci Numbers : \n");
    for (i=0;i<a;i++) {
        if (i<=1) {
            fibofirsecond=i;
        }
        else{
            fibofirsecond=first+second;
            first=second;
            second=fibofirsecond;
        }
        printf("%d\n",fibofirsecond);
    }
}
int main(){
    int a;
    printf("How many fibonacci numbers will be printed : ");
    scanf("%d",&a);
    fibonacci(a);
}
