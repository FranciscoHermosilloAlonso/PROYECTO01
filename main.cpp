#include <windows.h>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<stdlib.h>
#include <math.h>
float encontsuma(),resta(),multiplicar(), dividir(),factorial(),raiz(),potencia();
main(){
system("color 3A");
int op2;
float x,y;
char op;
do{

printf("Programa de una calculadora");
printf("\nElija una opcion");
printf("\na) Sumar dos numeros");
printf("\nb) Restar dos numeros");
printf("\nc) Multiplicar dos numeros");
printf("\nd) Dividir dos numeros");
printf("\ne) Factorial");
printf("\nf) Raiz cuadrada");
printf("\ng)Potencia");
printf("\nh) Salir");
printf("\nopcion: ");
scanf("%c",&op);
switch(op){
case 'a':{
float resultado;
resultado=encontsuma();
printf("\n La suma es: %.2f",resultado);
break;
}
case 'b':{
float resultado;
resultado=resta();
printf("\n La resta es: %.2f",resultado);
break;
}
case 'c':{
float resultado;
resultado=multiplicar();
printf("\n La multiplicacion es: %.2f",resultado);
break;
}
case 'd':{
float resultado;
resultado=dividir();
printf("\n La division es: %f",resultado);
break;
}
case 'e':{
float resultado;
resultado=factorial();
printf("\n El factorial es: %.2f",resultado);
break;
}
case 'f':{
float resultado;
resultado=raiz();
printf("\n El raiz es: %.2f",resultado);
break;
}
case 'g':{
float resultado;
resultado=potencia();
printf("\n La potencia es: %f",resultado);
break;
}
case 'h':{
printf("\n Saliendo del programa");
getchar();
exit(0);
break;
}
default: {
printf("Error");
break;
}
}
printf("\nPresione 1 para continuar: ");
scanf("%d",&op2);
getchar();
}
while(op2==1);
}
float encontsuma(){
float x,y,suma=0;
printf("Dame un numero: ");
scanf("%f",&x);
printf("Dame otro numero: ");
scanf("%f",&y);
suma=x+y;
return (suma);
getchar();
}
float resta(){
float x,y,resta=0;
printf("Dame un numero: ");
scanf("%f",&x);
printf("Dame otro numero: ");
scanf("%f",&y);
resta=x-y;
return (resta);
getchar();
}
float multiplicar(){
float x,y,multiplicar=0;
printf("Dame un numero: ");
scanf("%f",&x);
printf("Dame otro numero: ");
scanf("%f",&y);
multiplicar=xy;
return (multiplicar);
getchar();
}
float dividir(){
float x,y,dividir=0;
printf("Dame un numero: ");
scanf("%f",&x);
printf("Dame otro numero: ");
scanf("%f",&y);
dividir=x/y;
return (dividir);
getchar();
}
float factorial(){
float x,i,factorial=0;
printf("Dame un numero: ");
scanf("%f",&x);
factorial=1;
for(i=1;i<=x;i++){
factorial=ifactorial;
}
return (factorial);
getchar();
}
float raiz(){
float x,raiz=0;
printf("Dame un numero: ");
scanf("%f",&x);
raiz=sqrt(x);
return (raiz);
getchar();
}
float potencia(){
float x,y,potencia,i;
printf("Dame un numero: ");
scanf("%f",&x);
printf("\nDame la potencia: ");
scanf("%f",&y);
potencia=x;
for(i=1;i<y;i++){
potencia=potencia*x;
}
return (potencia);
getchar();
}
