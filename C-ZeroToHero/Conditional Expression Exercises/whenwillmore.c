/*The program prints how many years later the number of rabbits will exceed the number of birds.
It does this according to the annual rate of increase.
Rabbits are %3,8, birds are %1,2.
*/
#include <stdio.h>
#include <stdlib.h>
#define birds 12/1000
#define rabbits 38/1000
int main(){
    int rabbit,bird;
    int year=0;
    printf("How many birds do you have : ");
    scanf("%d",&bird);
    printf("How many rabbits do you have : ");
    scanf("%d",&rabbit);
    while (rabbit<bird) {
        rabbit+=rabbit*rabbits;
        bird+=bird*birds;
        year++;
    }
    printf("Rabbits exceed the numer of birds at %d. year\n",year);
    printf("Rabbits : %d\n",rabbit);
    printf("Birds : %d\n",bird);
}
