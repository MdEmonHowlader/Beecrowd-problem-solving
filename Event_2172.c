int main()
{
    unsigned long long int E,y;
    int x;
    while (1)
    {    
        if (x==0 && y==0) break;
       
           scanf("%d %llu",&x,&y);
            E=x*y;
        printf("llu\n",E);
    }
    return 0;
}