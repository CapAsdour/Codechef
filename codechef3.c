#include<stdio.h>
int main()
{
    int n,i,a,b,c,y=0;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d\n",&a,&b,&c);
        y=(a^b)^c;
        if(y%a==0 || y%b==0 ||y%c==0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }    

}
