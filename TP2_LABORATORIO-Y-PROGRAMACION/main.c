#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#include "funciones.h"
#define TAM 20


int main()
{
   Human P_ersona[TAM];
   int opcion;
                                 inicializar(P_ersona,TAM);

                               do{
                                printf("\n1- Agregar Persona");
                                printf("\n2- Borrar  Persona");
                                printf("\n3- Mostrar Persona");
                                printf("\n4- Imprimir Graficos de edades");
                                printf("\n5- salir\n");
                                fflush(stdin);
                                scanf("%d", &opcion);

                                if(opcion<1 || opcion>5){
                                printf("eliga una opcion valida\n");
                                system("pause");


                                }
                                system("cls");

                                switch(opcion){
                            case 1:
                                AgregarPersona(P_ersona, TAM);

                                break;

                            case 2:
                                 Borrar(P_ersona,TAM);

                                break;

                             case 3:
                                 Mostrar(P_ersona, TAM);

                                break;

                             case 4:
                                     Grafico(P_ersona, TAM);
                                break;

                              case 5:

                                     printf("gracias por utilizar el programa\n");
                                     system("pause");

                                break;
                                }

                               }while(opcion!=5);
    return 0;
}

