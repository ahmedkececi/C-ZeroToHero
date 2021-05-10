#include <stdio.h>
#include <stdlib.h>
#define value 150
//The program that prints the person closest to 150 cm by taking the student's number and height. If student number is 0, the program will stop.
int main()
{
    int num,hei,fark,minhei=0,minnum;
    printf("Student Number : ");
    scanf("%d",&num);
    printf("The Height Of The Student : ");
    scanf("%d",&hei);
    minnum=num;
    fark=abs(hei-value);
    while(num>0)
    {
        printf("\nStudent Number : ");
        scanf("%d",&num);
        printf("\nThe Height Of The Student : ");
        scanf("%d",&hei);

        if(abs(hei-value)<fark)
        {
            fark=abs(hei-value);
            minnum=num;
            minhei=hei;
        }
    }
    printf("\nStudent number %d is closest to %d cm with a height of %d cm.",minnum,value,minhei);
    return 0;
}
