#include <stdio.h>

int main() {
    int num1, num2, i, j, primo;


    scanf("%d", &num1);


    scanf("%d", &num2);

    if (num1 >= num2) {
        printf("O primeiro numero deve ser menor que o segundo.");
        return 1;
    }


    for (i = num1; i <= num2; i++) {

        primo = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }

        if (primo && i > 1) {
            printf("%d ", i);
        }
    }
 return 0;
}
