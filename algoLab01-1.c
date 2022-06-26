#include <stdio.h>

int main(){
    int x,t0,t1;
    t0=0;
    t1=1;
    for(int i=3; i<=10; i++)
    {
        x=t0+t1;
        t0=t1;
        t1=x;
        printf("%d ",x);
    }

}
