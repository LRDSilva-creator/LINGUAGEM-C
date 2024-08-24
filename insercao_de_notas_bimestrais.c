/******************************************************************************
-AV1 - Primeira Avaliação;
-AV2 - Seguda Avaliação;
-OA - Outra Avaliações;

*******************************************************************************/

#include <stdio.h>

int main()
{
  float AV1 = 0, AV2 = 0, OA = 0 , NotaFinal = 0;
  
  printf("Digite sua nota da primeira avaliação : ");
  scanf("%f",&AV1);
  printf("Digite sua nota da segunda avaliação : ");
  scanf("%f",&AV2);
  printf("Digite sua nota de outras  avaliaçõesc: ");
  scanf("%f",&OA);
  
  NotaFinal = (0.2 * AV1) + (0.5 * AV2) + (0.3 * OA);
  
  printf("Sua nota final é %.2f", NotaFinal);
    return 0;
}