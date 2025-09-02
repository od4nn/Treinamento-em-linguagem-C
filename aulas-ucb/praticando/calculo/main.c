#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int i,j,m,n;
    float S=0.0,pi,pj,v;

    scanf("%d %d",&n,&m);
    for(i=1;  i<=n;  i++){
        for(j=1;  j<=m;  j++){
           pi = powf(3.0,  i);
           pj = powf(3.0,  j);
           v = (float) i * i * j;
           v /= pi*(j*pi + i*pj);
           S += v;      // S = S + v;
        }
    }
    printf("Soma: %f\n",S);

}
