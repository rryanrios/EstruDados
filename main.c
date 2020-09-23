#include <stdio.h>

int main(){
  int vetor[10] = {52,45,25,31,28,17,65,35,42,86};
  int valorProcurado = 65;
    for(int i=0;i<10;i++){
      if(vetor[i] == valorProcurado){
        printf("O valor encontra-se na posicao: %d", i);
        break;
      }
    }
}