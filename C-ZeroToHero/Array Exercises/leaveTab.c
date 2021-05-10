//The program prints each word of the sentence by leaving a tab space.
#include <stdio.h>
#include <stdlib.h>
int main(){
    char sentence[100];
    int i,j,counter=0;
    printf("Enter Your Sentence : ");
    gets(sentence);
    for (i=0;sentence[i];i++){
        printf("%c",sentence[i]);
        if (sentence[i]==32) {
            printf("\n");
            counter++;
        for (j=0;j<counter; j++) {
            printf("\t");
        }
        }
    }
}
