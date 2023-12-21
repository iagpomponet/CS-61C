#include <stdio.h>

// Declarando um enum e definindo um tipo para ele, dessa forma facilitando a leitura
typedef enum
{
    SEGUNDA = 1,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO
} WeekDays;

int main()
{
    WeekDays day;

    printf("Digite o valor de um dia da semana: \n");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Segunda");
        break;
    case 2:
        printf("Terca");
        break;
    case 3:
        printf("Quarta");
        break;
    case 4:
        printf("Quinta");
        break;
    case 5:
        printf("Sexta");
        break;
    case 6:
        printf("Sabado");
        break;
    case 7:
        printf("Domingo");
        break;

    default:
        printf("Invalid day");
        break;
    }

    return 1;
}