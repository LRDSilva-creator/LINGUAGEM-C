/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int numeroUser = 0 , digitoUser = 0;
    printf ("Digite um numero de 0 a 100 : ");
    scanf("%i", &numeroUser);
    
    if(numeroUser <= 0 && numeroUser >= 100)
    {
        printf("Numero invalido");
    }
    else{
        while (digitoUser < numeroUser) {
    
            digitoUser++;
        }
            printf ("numero escolhido : %i\n", digitoUser);
    }

    return 0;
}