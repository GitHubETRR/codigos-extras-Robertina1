#include <stdio.h>

int main()
{
    char var=2;
    char * ptrchar=&var;
    
    printf("var tiene como valor: %x\n" ,var);
    printf("el puntero de var vale: %x\n" ,ptrchar);
    printf("el puntero de &var vale: %x\n" ,&var);
    printf("la direccion donde se guarda el puntero: %x\n" ,&ptrchar);
    return 0;
}
