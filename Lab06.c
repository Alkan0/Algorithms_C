#include <stdio.h>



int main(){
    int poso;
    printf("Dwse poso: ");
    scanf("%d",&poso);

    int kermata[]={1,2,5,10,20,50};
    int N=6, tempp = poso;
    int i = N-1 ;

    printf("Gia ta %d xreiazontai : ", poso);

    while(i>=0 && tempp>0){
        int pl_kermatwn = tempp / kermata[i];+
        printf("%d -> %d\n", kermata[i], pl_kermatwn);
        tempp = tempp%kermata[i];
        i--;
    }
}
