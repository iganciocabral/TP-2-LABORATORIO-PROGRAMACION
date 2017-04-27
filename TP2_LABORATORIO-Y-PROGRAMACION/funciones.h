#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>
#define TAM 20
typedef struct{
char nombre[50];
int edad;
long dni;
int estado;

}Human;
void inicializar(Human variable[], int tam);
void AgregarPersona(Human variable[], int tam);
void Mostrar(Human variable[], int tam);
void Borrar(Human variable[], int tam);
int ValidNum(char num[]);
int Validcadena(char auxchar[]);
void Grafico(Human variable[], int tam);
