#include<stdio.h>
#include<Math.h>
#define dim 7
main(){

        int vet [dim];
        int i,somma=0,riporto=1;


        printf("il numero che vuoi inserire e' positivo(0) o negativo(1)?:");
        scanf("%c",&vet[0]);

 for(i=1;i<dim;i++)
    {

        printf("\n \n inserisci il numero in bit: ");
        scanf("%d",&vet[i]);

   if(vet[i]==0)

     vet[i]=0;

   else

     vet[i]=1;

   }
 do{
    if(vet[i]==riporto)
    {
        vet[i]=0;
        riporto=1;
    }
    else if(vet[i]=0)
    {
        vet[i]=1;
        riporto=0;
    }



 }while(riporto==1);


for(i=0;i<dim;i++)
   {
      printf("ecco il risultato del complemento a due:\n",vet[i]);
   }



}
