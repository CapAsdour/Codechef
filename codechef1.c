#include<stdio.h>
int main()
{
    int n,i,a,b,c,s,t,u;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d\n",&a,&b,&c);
        s=a*a;
        t=b*b;
        u=c*c;
        if(s+t==u||s+u==t||u+t==s)
        {
            printf("Right-angled triangle \n");
        }
        else
        {
            printf("Not a right-angled triangle \n");
        }
    }

}
