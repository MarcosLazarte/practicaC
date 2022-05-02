#include <stdio.h>
/*Practica para lograr completar el ejercicio de loops de Hackerrank.*/

int main() 
{
    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
      int largo = (n*2)-1;
      int restador = 0;
      for(int i = 0; i < largo; i++){
          for(int j = 0; j < largo; j++){
              if(i < j){
                  restador = i;
              }else{
                  restador = j;
              }
              restador = restador < largo - i?  restador : largo - i - 1;

              restador = restador < largo - j ? restador : largo - j -1;
              printf("%d", n - restador);
              printf(" ");
          }
          printf("\n");
      }
    return 0;
}