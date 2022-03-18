#include <iostream>
#include <cmath>
#include <iomanip>

/*
* Ejercicio 57
* Encontrar número entero que multiplicado por:
* 52631578947368421 de como resultado solo nueves
*/

//@Autor -> SelvinToledo
//@Date -> 8/03/2022 

using namespace std;
int c = 0;
int numero[10];
int ResultadoFinal =0;

//metodo que genera solo nueves y los divide para encontrar un numero entero
void verifica2(long long int num ){
    long long int almacena = 0;//declaro variable que contendra solo nueves
    for(int i = 0;i<20;i++){
        almacena += 9 * pow(10,i);//aumento un nueve cada iteracion
        //if((almacena/num)%2 > 0 
        if(fmod(almacena/num,1.) == 0 && (almacena/num)> 1){// aqui verifico que la division sea un entero y mayor que 1
            ResultadoFinal = almacena/num;
            cout<<"El numero es: "<<almacena/num<<endl;   //imprimo numero que entre en la condicion
        }

    }
        
}

int main(){
 
    long long int nume = 52631578947368421;//declaro el numero 
    verifica2(nume);//llamo a la funcion que corresponde
    cout<<nume<<" * "<<ResultadoFinal<<" = "<<nume*ResultadoFinal<<endl;//imprimo resultado de multiplicación

    
    return 0;
}