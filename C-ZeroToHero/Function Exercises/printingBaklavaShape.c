#include <stdio.h>
#include <stdlib.h>

void triangle(int n)
{
    int i,j;
    int spacenum=n-1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=spacenum;j++)
        {
            printf(" ");
        }
        spacenum--;
        for(j=1;j<=2*i-1;j++)
        {
            printf("c");
        }
        printf("\n");
    }

}
void triangleplus(int n)
{
    int spacenum=1;
    int i,j;
    for(i=1;i<=n-1;i++)
    {
        for(j=1;j<=spacenum;j++)
        {
            printf(" ");
        }
        spacenum++;
        for(j=1;j<=2*(n-i)-1;j++)
        {
            printf("+");
        }
        printf("\n");
    }


}

int main()
{
    int line;
    printf("Please enter the number of lines\n");
    scanf("%d",&line);
    triangle(line);
    triangleplus(line);
    return 0;
}
