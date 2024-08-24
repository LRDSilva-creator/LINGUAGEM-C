/******************************************************************************

"A jornada de trabalho semanal de um funcionário é de 40 horas. Recebera hora extra aquele que trabalhar mais"
"que 40 horas por semana. O valor da hora extra é igual a hora regular com um acréscimo de 50%."

"Calcule o valor a ser recebido ao término da semana pelo funcionário a partir da leitura do numéro de horas trabalhadas"
"e do valor de sua hora de trabalho."

*******************************************************************************/

#include <stdio.h>



int main()
{
    float carga = 0 , receber = 0 , ganho = 0 , salario = 0;
    printf("Informe sua carga horaria da semana : ");
    scanf ("%f" , &carga);
    printf("Informe o ganho por hora : ");
    scanf ("%f" , &receber);
    
    if (carga <= 40){
        printf("Você trabalhou menos 40 horas ou menos\n");
    }
    else if (carga >= 40)
    {
       ganho = (carga - 40) * (0.5 * receber);
    }
    
    printf ("Ganho pelas horas extras : %.2f", ganho);
 
    return 0;
}