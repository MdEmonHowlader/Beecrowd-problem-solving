


#include<stdio.h>
int main(){
    int n,i,j;
    int t=0;
    int th=0;
    int f=0;
    int fv=0;
    scanf("%d",&n);
    printf("Enter your number:\n");
    for(i=0; i<n; i++){
        scanf("%d",&j);
        if(j%2==0)t++;
        if(j%3==0)th++;
        if(j%4==0)f++;
        if(j%5==0)fv++;
    }
    printf("%d Multiplo(s) de 2\n", t);
    printf("%d Multiplo(s) de 3\n", th);
    printf("%d Multiplo(s) de 4\n", f);
    printf("%d Multiplo(s) de 5\n", fv);
    return 0;
}