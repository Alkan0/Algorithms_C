#include <stdio.h>

int main(){
    int w[]={3,5,2,6,4};
    int v[]={12,14,10,20,18};
    int i, j , N=5, W=10;

    float realv[5];

    for(i=0; i<N; i++)
    {
        realv[i] = v[i]/(float)w[i];
    }

    for(i=0; i<N-1; i++){
        for(j=0; j<N-i-1; j++){
            if(realv[j] < realv[j+1])
            {
                float tempf = realv[j];
                realv[j] = realv[j+1];
                realv[j+1] = tempf;

                int temp = w[j];
                w[j] = w[j+1];
                w[j+1] = temp;

                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }

    int trexon_varos = 0;
    int saxia = 0;
    for(i=0; i<N; i++)
    {
        if(trexon_varos == W)
            break;

        if(trexon_varos+w[i] <= W){
            trexon_varos += w[i];
            saxia += v[i];
        }
    }

    printf("%d",saxia);

}
