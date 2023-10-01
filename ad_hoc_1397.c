#include <stdio.h>
int main()
{
    int n,x,y;
    while (1)
    {   
        int c1=0,c2=0;
        scanf("%d", &n);
        if (n==0) break;
        for (int i = 1; i <= n; i++)
        {
           scanf("%d %d",&x,&y);
            if(x>y) c1++;
            if(x<y) c2++;
        }
        printf("%d %d\n",c1,c2);
    }
    return 0;
}