//Practica para entender punteros y funciones y poder aplicarlo a "seqYPatron"
#include<stdio.h>
#include<stdlib.h>
char *fun(int n){
    char *arrayo = malloc((n + 1) * sizeof(char)); //Utilizo memoria dinamica para settear el array
    for(int i = 0; i < n; i++){
        fflush(stdin);
        printf("Array[%d]: ", i);
        scanf(" %c", arrayo + i);
    }
    *(arrayo + n) = '\0';
    return arrayo;
}
int main (){
    int tamanio;
    int i = 0;
    char *a;
    printf("Ingresa el tamanio del array: ");
    scanf("%d", &tamanio);
    a = fun(tamanio);                               //Le mando a la funcion el tamanio del array que quiero utilizar
    while(*(a + i) != '\0'){
        printf("\nDevuelto array[%d]: %c", i, *(a + i));
        i++;
    }
    return 0;
}