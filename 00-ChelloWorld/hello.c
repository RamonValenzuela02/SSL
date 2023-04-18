#include <stdio.h>


int main(){
    FILE *archivo_salida;
    archivo_salida = fopen("output.txt", "w");
    freopen("output.txt", "w", stdout);
 
    printf("hello world");
    fclose(archivo_salida);



    return 0;

}