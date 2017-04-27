#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include "funciones.h"
#define TAM 20

/** \ La funcion se encargara de inicializar los estados en 0
 *
 * \param "variable" es la variable a utilizar del tipo human
 * \param "tam" es el largo del array a recorrer
 */

void inicializar(Human variable[], int tam){
int i;
                   for(i=0; i<tam; i++){
                      variable[i].estado=0;

                   }
}// fin de la funcion

/** \brief se encargara de agregar informacion a todos los campos siempre que el estado este en 0
 * \param "variable" es la variable a utilizar del tipo human
 * \param "tam" es el largo del array a recorrer
 */


void AgregarPersona(Human variable[], int tam){
int i;
char aux[20];
char auxDNI[20];
char auxnombre[20];
int auxInt;
int TrueDni;
int flag=0;
                         for(i=0; i<tam; i++){


                            if(variable[i].estado==0){
                                    do{
                                printf("\ningrese Nombre: ");
                                fflush(stdin);
                                gets(auxnombre);

                                }while(Validcadena(auxnombre)==0);

                                  do{

                                printf("\ningrese edad: \n");
                                fflush(stdin);
                                gets(aux);
                                }while(ValidNum(aux)==0);

                                do{
                                printf("\ningrese D.N.I: \n");
                                fflush(stdin);
                                gets(auxDNI);
                                }while(ValidNum(auxDNI)==0);


                                  auxInt=atoi(aux);
                                  TrueDni=atoi(auxDNI);

                                  variable[i].edad=auxInt;
                                  variable[i].dni=TrueDni;
                                 strcpy(variable[i].nombre, auxnombre);
                                  variable[i].estado=1;



                                   flag=1;
                                   break;
                            }

                         }
                                      if(!flag){

                                        printf("no hay mas lugar");
                                      }
}

/** \brief se encargara de mostrar informacion de todos los campos siempre que el estado este en 1
 * \param "variable" es la variable a utilizar del tipo human
 * \param "tam" es el largo del array a recorrer
 */

void Mostrar(Human variable[], int tam){
int i;
int flag=0;
                    for(i=0; i<tam; i++){
                        if(variable[i].estado==1){

                            printf("\nNombre: %s", variable[i].nombre);
                            printf("\nEdad: %d", variable[i].edad);
                            printf("\nD.N.I: %d\n", variable[i].dni);
                                flag=1;

                        }


                        }
                                if(!flag){

                            printf("NO SE ENCONTRARON PERSONAS CARGADAS");

                    }
}
/** \brief se encargara de cambiar el estado en 0
 * \param "variable" es la variable a utilizar del tipo human
 * \param "tam" es el largo del array a recorrer
 */

void Borrar(Human variable[], int tam){
int i;
int flag=0;
long aux;

                      printf("ingrese dni: ");

                        scanf("%d", &aux);

                   for(i=0; i<tam; i++){


                    if(aux == variable[i].dni){
                       variable[i].estado=0;
                       flag=1;
                       printf("borrado con exito\n");
                       system("pause");
                       system("cls");
                       break;

                       }
                    }
                    if(!flag){
                   printf("no se encontraron personas para eliminar\n");
                  system("pause");
                   system("cls");



                    }






 }

 /** \brief Validara numeros enteros
 *
 * \param num sera la variable a cuestionar
 * \return si es un numero retomara 1 si no lo es 0
 */

int ValidNum(char num[]){
int i;




            for(i=0; i<strlen(num); i++){


                          if(!(isdigit(num[i]))){
                          printf("Debe ingresar solo numeros\n");

                          system("pause");
                          system("cls");
                          return 0;

                          }

            }

                            return 1;
}

/** \ Validara que la cadena solo tenga letras
 * \ auxchar es la variable a cuestionar
 * \return si la cadena solo tiene letras retornara 1 si no 0
 */

int Validcadena(char auxchar[]){
int i;




            for(i=0; i<strlen(auxchar); i++){


                          if(!(isalpha(auxchar[i]))){
                          printf("Debe ingresar solo letras\n");

                          system("pause");
                          system("cls");
                          return 0;

                          }

            }

                            return 1;
}
/** \brief Se encargara de mostrar grafico de asteriscos
 * \param tam es el tamaño a recorrer
 * \param Human variable es la variable a cuestionar

 */


void Grafico(Human variable[], int tam){
    int flag=0;
    int i;
    int Edad1=0;
    int Edad2=0;
    int Edad=0;
    int Rta;
    for(i=0; i<tam; i++)
    {
        if(variable[i].estado==1)
        {
            if(variable[i].edad<18){

                Edad1++;

            }
            else{


                if(variable[i].edad>=18 && variable[i].edad<=35){


                    Edad2++;
                }


                    if(variable[i].edad>35){

                    Edad++;
                  }
                }
          }
    }
           Rta=Edad1+Edad2+Edad;

    printf("Menor de 18\tEntre de 19-35\tMayor de 35\n");

      for(i=Rta; i>0; i--){


        if(Edad1 == i){


            printf("*");

            Edad1--;
        }
        printf("\t");
        printf("\t");
        printf("\t");

        if(Edad2 == i)
        {
            printf("*");


            Edad2--;
        }
        printf("\t");
        printf("\t");


        if(Edad==i)
        {
            printf("*");

            Edad --;
        }
        printf("\n");

         flag=1;
    }
         if(!flag){

          printf("no existe personas para mostrar el grafico\n");
         }

          system("pause");
          system("cls");

}
