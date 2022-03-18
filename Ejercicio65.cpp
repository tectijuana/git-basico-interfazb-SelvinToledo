#include <iostream>
#include <cmath>
/*
* Ejercicio 65
* Encontrar conjuntos similares a 72, 73 y 74 
* ya que cada uno es igual a la suma de sus cuadrados.
* encontrar numeros similares menores a 1000.
*/

//@Autor -> SelvinToledo
//@Date -> 15/03/2022

using namespace std;

//declaracion de variables y arreglos necesarios
int c = 0;
int arr[1000];
int n1[1000];
int n2[1000];

//funcion que verifica que no se repita ningun numero entrante
bool repetidos(int n){
    for(int x:arr){
        if(x==n){
            return true;
            break;//termina el ciclo si encuentra 
        }               
        
    }
    return false;
}

//funcion para ver todas las combinaciones posibles de numeros 
void verifica(int n){
    for(int i = 1;i<30;i++){//deje los numeros hasta 30 debido a que si lo elevas al cuadrado da mas de 1000
        for(int j = 1; j<30;j++){
            if(n == pow(i,2) + pow(j,2)){
                //cout<<n<<" "<<i<<" "<<j<<endl;
                if(repetidos(n)==false){//envio a la funcion para ver si se repiten
                    arr[c] = n;//guarda el numero en el arreglo
                    n1[c] = i;//guarda los numeros al cuadrado en otros arreglos
                    n2[c] = j;
                    c++;//aumenta contador
                }
                
            }
        }
    }
}
//aqui imprimo los numeros consecutivos que se encontraron
void consecutivos(){
    for(int i=0;i<=1000;i++){
        if(arr[i]!=0){
            int Nbase = arr[i];//guardo el numero a comparar
            if(Nbase+1 == arr[i+1] && Nbase+2 == arr[i+2]){//verifico si los 2 siguientes son consecutivos
                cout<<arr[i]<<"("<<n1[i]<<","<<n2[i]<<") "<<arr[i+1]<<"("<<n1[i+1]<<","<<n2[i+1]<<") "<<arr[i+2]<<"("<<n1[i+2]<<","<<n2[i+2]<<") "<<endl;//acomodo de forma en que sea entendible 
                
            }
        }
    }
}

int main(){
    for(int i = 1;i<=1000;i++){
       verifica(i);//envio por medio de un ciclo a los numeros de 1 - 1000
    }

    printf("Los numeros consecutivos son:\n");
    consecutivos();//verificacion y despliegue de numeros consecutivos
    
    return 0;
}