/*=====================================
|SINTAXIS Y SEMÁNTICA DE LOS LENGUAJES|
|======================================
|                                     |
|   Daniel Aizcorbe - K2005           |
|   Prof. Silvina Ortega              |
|   Programa: "hello.c"               |
|                                     |
=======================================*/
#include <stdio.h>

int main(){

    freopen ("output.txt","w",stdout); 
    printf("Hello World!");             
    fclose(stdout);                     

    return 0;
}