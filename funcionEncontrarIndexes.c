#include<stdio.h>
#include<stdlib.h>
int main (){
    char secuencia[] = "eamoamoamo";
    char patron[] = "amo";
    int flag;
    int coord;
    int contador = 0;
    int auxArrayIndexes = 0;
    int* punteroArray;

    printf("\nSize del array secuencia: %d y patron: %d\n", sizeof(secuencia), sizeof(patron));
    for(int i = 0; i < sizeof(patron) - 1; i++){
        for(int j = 0; j < sizeof(secuencia) - 1; j++){
            if(patron[i] == secuencia[j]){
                flag = 1;
                coord = j;
                for(int k = 1; k < sizeof(patron) - 2; k++){
                    if(patron[i+k] != secuencia[j+k]){
                        flag = 0;
                        break;
                    }
                }
                if(flag == 0){
                    flag = 0;
                    continue;
                }else if(flag == 1){
                    //push coord
                    contador++; //Aca, en la primera vuelta que hago encuentro la cantidad de veces que aparece el patron en la secuencia
                                //con el unico fin de, despues, asignar la cantidad de memoria al array
                }
            }
        }
        break;
    }
    if(contador != 0){
        //int arrayIndexes[contador];
        int* arrayIndexes = malloc(contador * sizeof(int));

        punteroArray = arrayIndexes;
        for(int i = 0; i < sizeof(patron) - 1; i++){
            for(int j = 0; j < sizeof(secuencia) - 1; j++){
                if(patron[i] == secuencia[j]){
                    flag = 1;
                    coord = j;
                    for(int k = 1; k < sizeof(patron) - 2; k++){
                        if(patron[i+k] != secuencia[j+k]){
                            flag = 0;
                            break;
                        }
                    }
                    if(flag == 0){
                        flag = 0;
                        continue;
                    }else if(flag == 1){
                        //push coord
                        arrayIndexes[auxArrayIndexes] = j;
                        auxArrayIndexes++;
                    }
                }
            }
            
            break;
        }
    }
    for(int i = 0; i < contador; i++){
        printf("\nArray de los indexes: %d", *(punteroArray + i), i);
    }
    return 0;
}