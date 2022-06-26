#include <stdio.h>
#include <limits.h>

int main(){
    int i;
    int N = 9;
    int s[]={1,2,3,4,5,4,8,9,10};
    int f[]={3,5,6,7,8,8,9,11,12};
    int count = 0;
    int ft=INT_MIN;
    for(i=0; i<N; i++){
        if(s[i]>=ft){
            printf("%d -% d\n",s[i],f[i]);
            count++;
            ft=f[i];
        }
    }
    printf("\nMax  # of jobs%d", count);
    return 0;
}
