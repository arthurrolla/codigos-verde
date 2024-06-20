#include <stdio.h>

int main() {
    int votos[7] = {0}; // Inicializa o vetor de votos com zeros
    int voto;



    while (1) {
        scanf("%d", &voto);

        if (voto == 0)
            break;

        if (voto >= 1 && voto <= 7) { // Verifica se o voto é válido
            votos[voto - 1]++; // Incrementa o contador de votos correspondente
        } else {
            printf("Codigo de voto invalido.\n");
        }
    }

    printf("%d %d %d %d\n", votos[0], votos[1], votos[2], votos[3]); // Votos dos candidatos
    printf("%d\n", votos[4]); // Votos nulos
    int totalvotos = votos[0] + votos[1] + votos[2] + votos[3] + votos[4] +votos[5]+votos[6]+votos[7];
    float percentualBrancos = ((float)votos[5] / totalvotos) * 100;

    printf("%.2f\n", percentualBrancos); // Percentual de votos em branco

    return 0;
}

