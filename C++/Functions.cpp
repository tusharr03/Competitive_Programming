#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a,int b,int c,int d)
{
    int max,max_1,max_2;
    if(a>b)
    {
        max_1=a;
    }
    else   
    {
        max_1=b;
    }
    if(c>d)
    {
        max_2=c;
    }
    else
    {
        max_2=d;
    }
    if(max_1>max_2)
    {
        max=max_1;
    }
    else
    {
        max=max_2;
    }
    return max;
}

int main() {
    int a, b, c, d;
    scanf("%d\n %d\n %d\n %d\n", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
