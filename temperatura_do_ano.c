/******************************************************************************
*******************************************************************************/

#include <stdio.h>

int main()
{
    float Maior_temp = 0 , Menor_temp = 0 , Media_temp = 0 ;
    float corredor1 = 0 , vetor1[12] , vetor2[12] , vetor3[12] , salva = 0;
    
    printf ("A maior temperatura registrada de cada mês\n\n");
    for (int i=1;13 > i;i++){
    
        printf ("Mês [%i] : " , i);
        scanf("%f" , &vetor1[i]);
    }
    
    printf ("A menor temperatura registrada de cada mês\n\n");
    for (int i=1;13 > i;i++){
    
        printf ("Mês [%i] : " , i);
        scanf("%f" , &vetor2[i]);
    }
    
    printf ("A temperatura media registrada de cada mês\n\n");
    for (int i=1;13 > i;i++){
    
        vetor3[i] = (vetor1[i] / vetor2[i]);
        salva = vetor3[i];
        
        
        printf ("\nMês [%i] : Med[%.2f] , Maior[%.2f] , Menor[%.2f] " , i , vetor3[i], vetor1[i],vetor2[i]);
        
        salva = 0;
    }
 

    return 0;
}