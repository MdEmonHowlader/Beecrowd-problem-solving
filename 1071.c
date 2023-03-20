#include<stdio.h>
int main(){
    int x;
    int y;
    scanf("%d", &x);
    scanf("%d",&y);
    int min, max, i;
    int sum=0;
    if(x<y){
        min=x;
        max=y;
    }else{
        max=x;
        min=y;
    }
    for(i=(min+1); i<max; ++i){
       if(i%2!=0){
         sum+=i;
       }
    }
    printf("%d", sum);

    
}