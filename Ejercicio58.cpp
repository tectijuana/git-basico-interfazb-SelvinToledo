#include <iostream>

/*
* Ejercicio 58
* Encontrar numeros de 5 digitos que multiplicados por 4 
* se le inviertan sus digitos:
* 4 x ABCDE = EDCBA
*/

//@Autor -> SelvinToledo
//@Date -> 9/03/2022 

using namespace std;

//metodo que verifica si es el numero invertido
void verifica(long n){
    long N = n;//guardo numero original

    long descompos[5];//separaro los numeros entrantes en un arreglo de longitud 5
    int i = 0;
    while(n>0){//ciclo para descomponer el numero
        descompos[i] = n%10;
        n = n/10;
        i++;
    }
    //para invertir el numero multiplico con el orden contrario multiplicando por su notacion
    long reverso = descompos[0]*10000 + descompos[1]*1000 + descompos[2]*100 +descompos[3]*10 + descompos[4];

    if(N * 4 == reverso){//comparo el numero original multiplicado por 4 y el mismo numero invertido
        cout<<N<<" * 4 = "<<reverso<<endl;// imprimo resultados aceptados.
    }


}

int main(){
    printf("Numeros que cumplen condicion: \n");
    for(long i = 10000; i<=99999;i++){//ciclo incluyendo exclusivemente a numeros con 5 digitos.
       verifica(i);//mando llamar la funcion verifica
    }

    return 0;
}