#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    int plc;
    printf("Enter a character : \n");
    scanf("%c",&ch);
    if((ch>='A')&&(ch<='Z')){
        plc=(int)ch-(int)'A'+1;
    }
    else {
        plc=(int)ch-(int)'a'+1;
    }
    printf("%c : %d. letter",ch,plc);
    return 0;
}
