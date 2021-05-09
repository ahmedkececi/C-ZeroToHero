//
//  simpleFractionOperations.c
//  C-ZeroToHero
//
//  Created by Ahmed Keçeci on 9.05.2021.
//

#include <stdio.h>

int main(){
    int a,b;
    char c;
    printf("Enter Add (+) or Subtract (-) Operator:");
    scanf("%c",&c);
    printf("Enter Two Numbers:");
    scanf("%d%d",&a,&b);
    if (a==0 || b==0) {
        printf("Cannot Operate");
    }
    else if (c=='+') {
        printf("1/%d + 1/%d = %d/%d\n",a,b,a+b,a*b);
    }
    else if (c=='-'){
        printf("1/%d - 1/%d = %d/%d\n",a,b,a-b,a*b);
    }
    else{
        printf("Incorrect entry\n");
    }
}
