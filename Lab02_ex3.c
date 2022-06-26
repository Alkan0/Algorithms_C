#include <stdio.h>
#include <limits.h>

int main(){
    int p[]={4,2,-7,5,2,-1,3,-4,3};
    int N=9;
    int max_sum = INT_MIN;
    int sum = 0;
    for(int i=0; i<N; i++)
    {
        sum += p[i];
        if(sum < 0)
            sum =0;
        if(max_sum < sum)
            max_sum = sum;
    }
    printf("Max : %d", max_sum);
}
