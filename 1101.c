#include<stdio.h>
int main(){
    int m,n,sum,max,min;
    for(;;)
    {
       scanf("%d%d",&m,&n);
       if(m<=0 || n<=0){
        break;
       }
       if(m>n){
        sum=0;
        max=m;
        min=n;
        for(int i=min;i<=max;i++){
        sum=sum+i;
        printf("%d ",i);
    }
    printf("Sum=%d\n",sum);
       }
       else{
        sum=0;
        max=n;
        min=m;
        for(int i=min;i<=max;i++){
        sum=sum+i;
        printf("%d ",i);
    }
    printf("Sum=%d\n",sum);
       }
    

    }
   return 0; 
}