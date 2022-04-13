/*
Programa que devuelve los indexes donde se encuentra un patron en una secuencia, ambos ingresados por el usuario.
Con motivo
*/
#include<stdio.h>
#include<stdlib.h>
typedef enum { false, true} bool;
int suma (int a, int b){
    return a+b;
}
int* practica (int *mensj){
    *mensj = 32;
    static int a[5] = {1,2,3,4,5};
    return a;
}
void infoPunteros(void){
    int a, b;
    int *PunteroDato;
    int Dato = 5;

    PunteroDato = &Dato;
    printf("\nDato: %d\n", Dato);
    *PunteroDato = 39;
    printf("Dato ahora vale, por ser modificado desde el puntero: %d\n", Dato);
    printf("Direccion de memoria de Dato: %d\n", &Dato);
    printf("Contenido de la direccion de memoria del puntero: %d\n", *PunteroDato);
    printf("Direccion de memoria donde se encuentra el puntero que guarda la direccion de memoria de la variable Dato: %d\n", &PunteroDato);
    printf("Direccion de memoria de la variable Dato: %d\n\n", PunteroDato);

    printf("Ingresame dos valores: \n");
    scanf("%d", &a);
    fflush(stdin);
    scanf("%d", &b);

    printf("La suma es: %d", suma(a, b));
}
int* practica2 ( char* sequence, char* pattern, int* result_count){
    int flag;
    int coord;
    int contador = 0;
    int auxArrayIndexes = 0;

    char *seq = sequence;
    char *pat = pattern;
    
    int contSeq = 0;
    int contPat = 0;

    while(*(pattern + contPat) != '\0'){    //Iteracion que use para corroborar si estaba logrando enviar los datos por el puntero
                                            //ademas de entender el uso de los mismos y los strings. Como no puedo hacer sizeof
                                            //de un puntero, uso este metodo para saber su tamanio
        //printf("\nPatron[%d]: %c", contPat, *(pattern + contPat));
        contPat++;
    }
    char patron[contPat];
    while(*(sequence + contSeq) != '\0'){
        //printf("\nSeq[%d]: %c", contSeq, *(sequence + contSeq));
        contSeq++;
    }
    char secuencia[contSeq];
    for(int i = 0; i < contPat; i++){
        for(int j = 0; j < contSeq; j++){ 
            if(*(pattern + i) == *(sequence + j)){
                flag = 1;
                coord = j;
                for(int k = 1; k <= contPat - 1; k++){
                    if(*(pattern + i + k)!= *(sequence + j + k)){
                        flag = 0;
                        break;
                    }
                }
                if(flag == 0){
                    continue;
                }else if(flag == 1){
                    contador++;
                }
            }
        }
        break;
    }
    if(contador != 0){
        *result_count = contador;
        int* punteroArray = malloc(contador * sizeof(int));

        for(int i = 0; i < contPat; i++){ 
            for(int j = 0; j < contSeq; j++){ 
                if(*(pattern + i) == *(sequence + j)){
                    flag = 1;
                    coord = j;
                    for(int k = 1; k <= contPat - 1; k++){ //k < contPat - 2
                        if(*(pattern + i + k)!= *(sequence + j + k)){
                            flag = 0;
                            break;
                        }
                    }
                    if(flag == 0){
                        flag = 0;
                        continue;
                    }else if(flag == 1){
                        //push coord
                        *(punteroArray + auxArrayIndexes) = j;
                        auxArrayIndexes++;
                    }
                }
            }
            return punteroArray;
            break;
        }
    }
}
int main(){
    int opcion;
    int *mensajero;
    int mensaje = 98;
    mensajero = &mensaje;
    printf("\nDeseas saber info acerca de punteros? Ingresa 9 para si, cualquier cosa para no: ");
    scanf("%d", &opcion);
    fflush(stdin);
    if(opcion == 9){
        infoPunteros();
        int *arrayDevuelto;
        printf("\nEl mensajero tiene valor: %d", *mensajero);
        arrayDevuelto = practica(mensajero);
        printf("\nEl mensajero tiene valor: %d", mensaje);
        int largoArray = sizeof(arrayDevuelto);
        printf("\nEl array que volvio es: ");
        for (int i = 0; i <= largoArray; i++){
            printf("%d", arrayDevuelto[i]);
        }
    }

    int *tamanio;
    int test;
    int lengthSec;
    int lengthPatron;
    tamanio = &test;
    printf("\nIngrese el tamanio de la secuencia: ");
    scanf("%d", &lengthSec);

    char arraySec[lengthSec + 1];
    char *secuencia;
    secuencia = arraySec;
    printf("\n");
    for(int i = 0; i < lengthSec; i++){                         //Aca se guarda la secuencia donde se buscara el patron
        //fflush(stdin);
        printf("Ingrese Secuencia[%d]: ", i);
        scanf(" %c", &arraySec[i]);
        //scanf("%c", &arraySec[i]);
    }
    arraySec[lengthSec] = '\0';
    fflush(stdin);
    printf("\nIngrese el tamanio del patron a buscar: ");
    scanf("%d", &lengthPatron);
    
    char arrayPatron[lengthPatron + 1];
    char *patron;
    patron = arrayPatron;
    printf("\n");
    for(int i = 0; i < lengthPatron; i++){                      //Aca se guarda el patrón
        printf("Ingrese Patron[%d]: ", i);
        scanf(" %c", &arrayPatron[i]);
    }
    arrayPatron[lengthPatron] = '\0';
    fflush(stdin);
    //int *respuesta[*tamanio];                                       //opcion1
    int *respuesta;                                                 //opcion2
    //Mostrar el contenido del puntero de practica2
    //respuesta[*tamanio] = practica2( tamanio);                      //opcion1
    respuesta = practica2( secuencia, patron, tamanio);            //opcion2
        
    for(int i = 0; i < *tamanio; i++){
        printf("\nIndex donde se encuentra el patron en la secuencia: [%d]", *(respuesta + i));                   //opcion1
        //printf("%d", (respuesta + i));                            //opcion2
    }
    return 0;
}