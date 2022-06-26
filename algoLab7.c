#include <stdio.h>
#define N 3
#define M 4
int main(){
    int i, j, P[N][M];
    for(i=0; i<N; i++){
        P[i][0] = 1;
    }
    for(j=0; j<M; j++){
        P[0][j] = 1;
    }

    for(i=1; i<N; i++){
        for(j=1; j<M; j++)
        {
        P[i][j] = P[i-1][j] + P[i][j-1];
        }
    }
    printf("Sunolikes diadromes: %d", P[N-1][M-1]);
}
