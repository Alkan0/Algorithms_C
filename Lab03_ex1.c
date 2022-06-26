#include <stdio.h>

int max(int a, int b){
    return (a>b)?a:b;
}

int max3(int a, int b, int c){
    return max(max(a,b),c);
}

int divide_and_conq(int p[], int l, int r)
{
    if(l==r){
        return p[l];
    }

    int m =(l+r)/2;

    return max3(divide_and_conq(p, l, m),
                divide_and_conq(p, m+1, r),
                max_sum_mid(p, l, m, r));
}

int max_sum_mid(int p[], int l, int m, int r){
    int max_left = 0;
    int sum_left = 0;
    int i;
    for(i=m; i>=l; i--)
    {
        sum_left += p[i];
        if(sum_left > max_left)
            max_left = sum_left;
    }

    int sum_right=0;
    int max_right=0;
    for(i= m+1; i<=r; i++)
    {
        sum_right += p[i];
        if(sum_right > max_right)
            max_right = sum_right;
    }
    return max_left + max_right;
}

int main(){
int N=8;
int p[]={-3,2,-1,5,6,-3,4,-2};
int s = divide_and_conq(p,0,N-1);
printf("%d",s);
}
