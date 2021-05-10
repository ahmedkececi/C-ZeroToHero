#include <stdio.h>
#include <stdlib.h>
float func(float a,float b,char c){
    if (c=='+') {
        return a+b;
    }
    else if (c=='-') {
        return a-b;;
    }
    else if (c=='*') {
        return a*b;
    }
    else if (c=='/') {
        return a/b;
    }
    else{
        printf("Please Enter A Valid Operator");
        return 0;
    }
}

int main(){
    float a,b;
    char c;
    printf("Enter The Operatot You Want To Do (+, -, *, /) : ");
    scanf("%c",&c);
    printf("Enter Two Integers : ");
    scanf("%f%f",&a,&b);
    printf("Result of the Process : %2.f",func(a,b,c));
}

