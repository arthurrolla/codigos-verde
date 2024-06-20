#include <stdio.h>

int main(){

     int n;
     float s = 0.0;

     scanf("%d",&n);

     for(int i = 1; i <= n; i++){
        int numerador = 2 * i - 1;
        float termo = (float) numerador/i;
        s += termo;
     }

     printf("%.2f\n", s);

}
