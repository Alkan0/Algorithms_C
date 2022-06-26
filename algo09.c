#include <stdio.h>

int max(int a, int b)
{
    return (a>b)?a:b;
}

int main(){
    int N=3,S=5;
    int i,j;
    int values[]={5,3,4};
    int weights[]={3,2,1};
    int Val[N+1][S+1];
    int Keep[N+1][S+1];

    for(i=0; i<N+1; i++){
        for(j=0; j<S+1; j++){

            if(i==0 || j==0){
                Val[i][j]=0;
                Keep[i][j]=0;
            }

            else if(j<weights[i-1]){
                Val[i][j]=Val[i-1][j];
                Keep[i][j]=0;
            }

            else{
                Val[i][j] = max(Val[i-1][j], values[i-1] + Val[i-1][j-weights[i-1]]);

                if(Val[i-1][j] > values[i-1] + Val[i-1][j-weights[i-1]])
                    Keep[i][j] = 0;
                else
                    Keep[i][j] = 1;

            }
        }
    }
    i=N, j=S;
    while(i>0){
        if(Keep[i][j]==1){
            printf("Eklepsa to %d\n" , i);
            j = j-weights[i-1];
        }
        i--;
    }

    printf("H kaluterh axia pou mporw na parw me sako megathous %d einai %d ", S, Val[N][S]);


}
