#include <iostream>
#include <string>

/*
* Ejercicio 64
* Determinar numeros enteros que al dividir sus primeros 2 digitos y sus ultimos
* se obtenga el numero original.
* Encontrar numeros con esta condicion menores a 10000.
*/

//@Autor -> SelvinToledo
//@Date -> 13/03/2022

using namespace std;

//funcion para verificar si los numeros encontrados son iguales al original
void Verifica(int a, int b, int original){
    if(((a+b)*(a+b))==original){
        cout<< original<<endl;//imprimo unicamente el numero original
    }
}

void Descompone(int n){
    int N = n;//guardo el numero entrante

    string T;
    T = to_string(n);//convierto a string en numero entrante
    
    int descompos[T.size()];//separar los numeros entrantes en un arreglo
    int i = 0;//declaracion de indice
    while(n>0){//ciclo para descomponer el numero entrante en un arreglo.
        descompos[i] = n%10;
        n = n/10;
        i++;
    }

    if(T.size()==4){//incluyo unicamente a numeros con 4 digitos para realizar el problema
        int a = descompos[3]*10 + descompos[2];// separo primeros 2 numeros
        int b = descompos[1]*10 + descompos[0];// separo ultimos 2 digitos
        Verifica(a,b,N);//envio al metodo los 2 numeros separados y el original
    }
    
    
    
}

int main(){
    printf("Numeros con la misma propiedad: \n");
    for(int i= 1000; i<10000;i++){
        Descompone(i);//envio todos los numeros entre 1000 -10000 con un ciclo, porque son los unicos que tienen 4 digitos
    }
    return 0;
}