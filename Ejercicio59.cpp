#include <iostream>
#include <cmath>

/*
* Ejercicio 59
* Encontrar numeros que sean triangulares y cuadrados  
* Trianguales: (n(n+1))/2
* Cuadrados: n*n
* que entrean en ambos patrones.
*/

//@Autor -> SelvinToledo
//@Date -> 9/03/2022 

using namespace std;

//metodo para verificar que se cumplan ambos patrones
void verifica(long long n){
    if((n * (n+1))/2 == pow(n,2)){
        cout<<n<<endl;// si se cumple imprimo el número
    }
    //cout<<(n * (n+1))/2<< " = "<<pow(n,2)<<endl;
}

int main(){
    printf("Los numeros son: \n");
    for(long long i = -1000000;i<=1000000;i++){
        verifica(i);//llamo al metodo verifica con numeros grandes.
    }
    return 0;
}