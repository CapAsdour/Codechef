#include<stdio.h>
int main()
{
    int n,i=1,a,b,c;
    scanf("%d",&n);
    while(i<=n)
    {
        scanf("%d %d %d\n",&a,&b,&c);
        if ((b!=0) && (c!=0))
        {
            if(a%b==0 || a%c==0)
            {
                printf("wonderful \n");
            }
            else
            {
                printf("no \n");
            }
        }
        else
        {
            printf("no \n");
        }
        i=i+1;
    }
    return 0;
}
