#include<stdio.h>
int main()
{
    
    int T[8]={0},i=0;
    unsigned int N = 10;
    while (N!=0)
    {
        T[7-i]=N%2;
        N=N/2;
        i++;      
    }
    
    return 0;
}
