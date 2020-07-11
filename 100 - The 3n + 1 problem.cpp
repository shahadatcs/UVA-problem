#include<iostream>
#include<cstdio>
int cycle(long long int i) ;
int main()
{
    long long int a,b,c,x,y,i,max;
    while (scanf("%lld %lld",&a,&b)==2)
    {
        if (a<b){
            x=a;
            y=b;
        }
        else {
            x=b;
            y=a;
        }
        max=1;
        for (i=x;i<=y;i++)
        {
            c=cycle(i);
            if (c>max)
                max=c;
        }
        printf("%lld %lld %lld\n",a,b,max);
    }
}
int cycle(long long int i)
{
    int count=1;
    while (i>1)
    {
        if (i%2!=0)
            i=3*i+1;
        else
            i=i/2;
        count++;
    }
    return count;
}
