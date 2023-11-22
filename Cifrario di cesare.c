#include<stdio.h>
#define dim 5
main(){



char parola[dim];
int cifrato=3;
int i,scelta;



for(i=0;i<dim;i++)
{

    printf("\n Inserisci la parola che verra cifrata:    ");
    scanf("%s", parola[i]);

parola[i]+=cifrato;

}

printf("\n Vuoi Chiave Originale?:  ");
printf("\n Si digita 1");
printf("\n no digita 0");



if(scelta==1)
{
  parola[i]-=cifrato;

for(i=0;i<dim;i++)
{


    printf("la chiave originale e':%s ", parola[i]);


}
}else
{


for(i=0;i<dim;i++)
{



printf("la parola cifrata e':%s",  parola[i]);




}
}
}
