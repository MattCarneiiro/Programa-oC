#import <stdlib.h>
#import <stdio.h>


int main(){

    int n, i , fatorial, nsalvo;
    printf("Digite um n�mero para saber seu Fatorial\n");
    scanf("%d" , &n);
    // Verifica��o de se � 0
    if(n!=0){
        //printf("O fatorial de %d � %d", n, fatorialmk(n));
        /*fatorial=n;
        for (i = n; i>1; i--){
            fatorial= fatorial*(i-1);
        }*/
        printf("O fatorial de %d � %d ", n, fatorialmk(n) );

    }
    else{
        printf("O fatorial de 0 � 1");
    }


}
int fatorialmk(n){
    int i, fatorial;
    fatorial=n;
    for (i= n; i>1; i--){
        fatorial= fatorial*(i-1);
    }
    return fatorial;
}
