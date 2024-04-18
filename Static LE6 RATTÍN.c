#include <stdio.h>

void funcion (void);

int main (){
  funcion();
  funcion();
  funcion();
  funcion();
  
  return 0;
  
}

void funcion (void){
    static int var=0;
    printf("%d\n", var);
    var++;
    
}