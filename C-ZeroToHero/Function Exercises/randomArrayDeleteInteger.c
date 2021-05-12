#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void deleteline(int list[],int a,int n){
    int i;
    if (a>=n+1) {
        printf("The line you want to delete cannot be greater than your index.");
    }
    else{
        for (i=a-1; i<a-1; i++) {
            list[i]=list[i]+1;
        }
        printf("Final List : \n");
        for (i=0; i<n; i++) {
            printf("%d",list[i]);
        }
    }
}

int main(){
    int n,i,a;
    printf("How many integers do you want to create : ");
    scanf("%d",&n);
    int list[n];
    srand(time(0));
    for (i=0; i<n; i++) {
        list[i]=rand()%100;
        printf("%d\n",list[i]);
    }
    printf("\nEnter the line you want to delete : \n");
    scanf("%d",&a);
    deleteline(list,a,n);
}
