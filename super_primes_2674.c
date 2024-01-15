#include <stdio.h>
#include<string.h>
int main()
{
      while (1)
      {
        int n,count=0,digit,d;
        scanf("%d",&n);
        if(n==1) count=1;
        for(int i=2;i<=n/2;i++){
            if(n%i==0) {
                count=1;
                break;
            }
            else count=0;
        }
        if(count==1){
            printf("not prime\n");

        }
         else if(count==0){
           while(n>0){
              digit=n%10;
              d=digit;
              if(d==2 || d==3 || d==5 ||d==7){
                
              }
              n = n/10;
           }
            }
             
            
        }

    return 0;
}