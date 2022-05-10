#include <stdio.h>

int senha(int num){
  int result;
  
  if (num == 2002) {
    printf("Acesso Permitido\n");
    return (1);
  } else {
    printf("Senha Invalida\n");
    scanf("%d", &num);
    senha(num);
  }
}

int main(){
  int num;
  
  scanf("%d", &num);
  senha(num);
  
  return 0;
}
