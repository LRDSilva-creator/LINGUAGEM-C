/******************************************************************************
O salário mensal de um vendedor na loja Sunders & Cia 
é dado pela soma de um valor fixo e comissões de venda.
A comissão é de 3% caso o total de vendas seja igual ou 
inferior a R$ 2.000,00 e de 5% caso ultrapasse este valor. 

Determine o valor a ser recebido no final do mês a partir da 
leitura do salário fixo e o total de vendas realizadas pelo funcionário naquelemês
*******************************************************************************/

#include <stdio.h>

int main()
{
  float vendas=0 , ganhos=0;
  
  printf("Indica a quantidade vendida(unidade monetaria) : ");
  scanf("%f", &vendas);
  
  if(vendas >= 0 && vendas <= 2000){
      ganhos = vendas * 1.03;
  }
  else
  {
      ganhos = vendas * 1.05;
  }
  
  printf ("A quantia recebida equivale a : %.2f" , ganhos);
    return 0;
}