#include<stdio.h>
main(){
       const float pigreco =3,14;
       int raggio=8;
       float perimetro;
       float area;
       perimetro=2*pigreco*raggio;
       printf("il perimetro della circonferenza di raggio %d e':%6.2f",raggio,perimetro);
       area=pigreco*raggio^2;
       printf("%f",area);

}
