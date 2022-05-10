#include <stdio.h>
 
int tabuada(int num, int multiplicador){
  int result;
  
  if (multiplicador > 10)
    return (1);
  else{
    result = num * multiplicador;
    printf("%d x %d = %d\n", multiplicador, num, result);
    tabuada(num, multiplicador + 1);
  }
}

int main(){
  int multiplicador = 1;
  int num;
  
  scanf("%d", &num);
  tabuada(num, multiplicador);
  
  return 0;
}
