#include<stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>

int V1[10]={10,20,30,40,50,60,70,80,90,100};
int i, soma=0, cont=0;
float media;

int main()
{

    for ( i = 0; i < 10; i++)
  {
    soma=soma+V1[i];
  }

    media = soma/10;
    printf("media: %.2f\n", media);

    for ( i = 0; i < 10; i++)
  {
         if (media>V1[i])
        {
           cont=cont+1;
        }
  }
printf("Numeros abaixo da média é: %d\n", cont);
return 0;
}

