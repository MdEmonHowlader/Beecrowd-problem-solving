#include<stdio.h>
int main(){
    int height;
    int thickness;
    int branches;
    int N;
     scanf("%d", &N);
   
    for(int i=0; i<N; i++){
            scanf("%d", &height);
            scanf("%d", &thickness);
            scanf("%d", &branches);
       
       if(height >= 200 && height<=300 && thickness>=50 && branches>=150 ){
        printf("Sim\n");
       }else{
        printf("Nao\n");
       }
       
    }
    return 0;
    
}