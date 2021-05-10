//This program prints the most used letter in the sentence written in lowercase letters.
#include <stdio.h>
#include <stdlib.h>
int main(){
    char sentence[150],letter = '\0';
    int smalletter[26]={0},i=0,most;
    printf("Enter Sentence : ");
    gets(sentence);
    while (sentence[i]) {
        if (sentence[i]>='a'&& sentence[i]<='z') {
            smalletter[sentence[i]-'a']++;
        }
        i++;
    }
    most=smalletter[0];
    for (i=1; i<26;i++) {
        if (smalletter[i]!=0) {
            if (smalletter[i]>most) {
                most=smalletter[i];
                letter=i+'a';
            }
        }
    }
    printf("The Most Used Character Is : %c\n",letter);
    return 0;
}
