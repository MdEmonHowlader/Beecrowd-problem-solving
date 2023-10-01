#include<stdio.h>
int main(){
    int l;
    int c;
    scanf("%d %d",&l, &c);
   if(l%2==0){
    if(c%2==0){
        printf("1");
    }else{
        printf("0");
    }
   }
   else if(l%2!=0){
    if(c%2==0){
        printf("1");
    }else{
        printf("0");
    }
   }
}