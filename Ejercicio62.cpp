#include <iostream>
#include <cmath>

/*
* Ejercicio 62
* Determinar numeros enteros C entre 1 - 50, que puedan escribirse de esta forma:
* (C)*(C) = ((A)*(A)) + ((B)*(B))
* Encontrar numeros enteros positivos que cumplan con la forma anterior.
*/

//@Autor -> SelvinToledo
//@Date -> 13/03/2022 

using namespace std;

//Metodo que verifica que se cumpla la forma
void verifica(int a, int b, int c){
    
    if(pow(a,2) == pow(b,2) + pow(c,2)){//elevo los números correspondientes
        cout<<a<<" "<<b<<" "<<c<<endl; //imprimo unicamente los numeros sin elevar
    }
    
}

int main(){
    printf("Los numeros son: \n");
    printf("C  A  B\n");
    for(int i = 1;i<=50;i++){//hago un ciclo con limite de 50 (C)
    for(int j = 1;j<=100;j++){//concateno un segundo ciclo con limite de 100 (A)
        for(int k = 1;k<=100;k++){//concateno un tercer ciclo con limite de 100 (B)
            verifica(i,j,k);//mando a verificar con la funcion, obteniendo todas las combinaciones posibles
        }
    }
}
    return 0;
}