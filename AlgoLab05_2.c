#include <stdio.h>

int max(int a, int b){
    return(a>b)?a:b;
}

int main(){
    int k[]={1,2,3,4,5,6,7,8,9};
    int r[]={0,1,1,3,3,3,4,6,5};
    int o[10];
    o[0] = 0;
    for(int i=1; i<10; i++){
        o[i] = max(o[i-1], 1+o[r[i-1]]);
        printf("%d, ",o[i]);
    }
    return 0;
}
