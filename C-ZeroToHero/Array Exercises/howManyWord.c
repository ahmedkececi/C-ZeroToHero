//This program prints how many words the sentence is composed of.
#include <stdio.h>
#include <stdlib.h>
int main(){
    char sentence[100];
    int i = 0,counter=0;
    printf("Enter Your Sentence : ");
    gets(sentence);
    while (sentence[i]) {
        if (sentence[i]==32){
            counter++;
        }
        i++;
    }
    printf("Your sentence is %d words",counter+1);
}
