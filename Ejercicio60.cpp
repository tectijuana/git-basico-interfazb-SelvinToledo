#include <iostream>
#include <cmath>

/*
* Ejercicio 60
* Encontrar enteros positivos que sean distintos entre  si W, X, Y y Z, 
* todos menores que 15, que cumplan la siguiente forma:
* W³ + X³ = Y³ + Z³.
*/

//@Autor -> SelvinToledo
//@Date -> 10/03/2022 

using namespace std;

//metodo para generar y revisar que los numeros sean diferentes
void verifica(){
    for(int i =1;i<=15;i++){
        for(int j = 1;j<=15;j++){//4 ciclos concatenados para verificar todas las opciones posibles de numeros
            for(int k = 1;k<=15;k++){
               for(int l = 1;l<=15;l++){
                   /*if(pow(i,3)+pow(j,3)==pow(k,3)+pow(l,3) && i!=j && i!=k && i!=l && j!=k && j!=l && k!=l){
                    cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;
                   }*/
                   if(pow(i,3)+pow(j,3)==pow(k,3)+pow(l,3) && j!=k && l!=k && l!=j){//verifico si se cumple la forma y si son diferentes los numeros entre si
                    cout<<i<<" "<<j<<" "<<k<<" "<<l<<endl;//imprimo los 4 numeros
                   }
                
               } 
            }
        }
    }

}
int main(){
    printf("W X  Y Z\n");
    verifica();

    return 0;
}