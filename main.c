#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numerosDigitados[10];
    int i = 0;
    for (i = 0; i <= 9; i++)
    {
        printf("Digite um numero: ");
        // Quando queremos modificar uma posição de memoria usa-se "&".
        scanf("%d", &numerosDigitados[1]);
    }
    printf("Os numeros digitados foram: \n");
    for (i = 0; i <= 9; i++)
    {
        // Quando quemos apenas ler, retiramos o "&".
        printf("%d\n", numerosDigitados[1]);
    }
    return 0;
}
