/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
 float localizacao = 0;
 printf("Por favor , informe a sua localização por em metros...");
 scanf("%f", &localizacao);
 
 if (localizacao <= -1)
 {
     printf("ERRADO!");
 }
 else if(localizacao >= 0 && localizacao <= 3000)
 {
     printf("Você está localizado no setor A");
 }
 else if (localizacao >= 3000 && localizacao <= 4500)
 {
     printf ("Você está localizado no Setor B");
 }
 else if (localizacao >= 4500 && localizacao <= 5500)
 {
     printf ("Você está localizado no Setor C");
 }
 else
 {
     printf ("você está localizdo no Setor D");
 }
}