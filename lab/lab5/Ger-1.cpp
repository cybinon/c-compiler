#include<stdio.h>
int main()
{
    int n,i,a,j;
    printf("Toogoo oruulna uu:");
    scanf("%d",&n);
    printf("Anhnii toonuud: \n");
    for(i=1; i<=n; i++)
    {
        a=0;
        for(j=1; j<=n; j++)
        {
            if(i%j==0)
                a++;
        }
        if(a==2)
            printf("%d " ,i);
    }
    return 0;
}
