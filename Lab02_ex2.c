#include <stdio.h>
#include <limits.h>
int main(){
    int p[]={-2,3,-1,4,-2,-1,4,-5};
    int N=8;
    int sum;
    int max_sum=INT_MIN;

    for(int i=0; i<N; i++){ //Dhlwnei pou ksekinaei to athroisma.
            sum = 0;
        for(int j=1; j<N; j++){ //Dhlwnei pou teleiwnei to athroisma.
            sum += p[j];
            if(max_sum < sum)
                max_sum = sum;
        }
    }
    printf("Max : %d",max_sum);
}
