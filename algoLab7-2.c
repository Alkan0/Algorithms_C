#include <stdio.h>

int main(){
    int r=1, c=10, i , j;
    int N=10;
    int sum;
    int p[]={11, 9, 9, 12, 12, 12, 12, 9, 9, 11};
    int maxsum=0;
    for(int i=0; i<=N-4; i++)
    {
        sum = 0;
        for(int j=i; j<=i+3; j++)
        {
            sum += p[j];
        }
        if(maxsum < sum)
            maxsum = sum;
    }
    printf("%d\n",maxsum);
    int sun_pos=0;
    for(i=0; i<N; i++)
        sun_pos += p[i];

    if(maxsum > c*4){
        sun_pos = sun_pos - maxsum;
        sun_pos = sun_pos + c*4;
    }

    printf("Sunoliko poso plirwmis: %d\n", sun_pos);

}
