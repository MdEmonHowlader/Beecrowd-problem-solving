#include <stdio.h>
int main()
{
      int n;
    while (scanf("%d",&n) !=EOF)
    {  
        float a[n];
        float min;
        for(int i=0;i<n;i++){
            scanf("%f",&a[i]);
            min=a[0];
            if(min>a[i]) min=a[i];    
        }
        printf("%.2f\n",min);
    }

    return 0;
}