#include <stdio.h>
int main (){ 
    float mivar = -15;
    char *p = &mivar;
      
    printf ("0x%x\n", mivar);
    printf ("0x%x\n", &mivar);
    printf ("0x%x\n", p);
    printf ("0x%c\n", *p);
    
    return 0;
}


 
 
