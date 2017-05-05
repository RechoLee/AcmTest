/*#include<stdio.h>
int main()
{
    int i,n,m,sum,j;
    int args[20];
    int result[10];
    scanf("%d",&n);
    j=n;
    while(n--)
    {
        scanf("%d",&m);
        sum=0;
        for(i=0;i<m;i++)
        {
            scanf("%d",&args[i]);
            sum+=args[i];
        }
        result[n]=sum;
    }

    for(i=0;i<j;i++)
    {
        printf("%d\n\n",result[i]);
    }
    return 0;
}*/

#include<stdio.h>
int main()
{
    int i,n,m,sum;
    int args[20];
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&m);
        sum=0;
        for(i=0;i<m;i++)
        {
            scanf("%d",&args[i]);
            sum+=args[i];
        }
        if(n<1)
            printf("%d\n",sum);
        else
            printf("%d\n\n",sum);
    }
}
