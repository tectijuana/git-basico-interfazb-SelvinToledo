#include <iostream>
#include <string>

/*
* Ejercicio 55
* Encontrar numero de 3 digitos que tengan la siguiente caracteristica:
* 12 x 12 = 144 y 21 x 21 = 441
*/

//@Autor -> SelvinToledo
//@Date -> 5/03/2022 

using namespace std;

void evalua(int n){
    int NN = n;
    int res = n*n;// 12 x 12 == 144
    
    string T;
    T = to_string(n);//convierto a string al cuadrado del numero original

    string T1;
    T1 = to_string(res);//convierto a string al cuadrado del numero original

    int multiplicador[T.size()];//separar los numeros entrantes en un arreglo
    int i = 0;
    while(n>0){
        multiplicador[i] = n%10;
        n = n/10;
        i++;
    }

    int resultados[T1.size()];//separar los resultados entrantes de elevar al cuadrado
    int j = 0;
    while(res>0){
        resultados[j] = res%10;
        res = res/10;
        j++;
    }
    //es el resultado del numero inverso
    
    //el cuadrado inverso
    int reversores = 0;//declaro variables para los numeros invertidos tanto del numero en si como del mismo elevado al cuadrado
    int reverso = 0;
    if(NN>=10 && NN<31){
        reverso = multiplicador[0]*10 + multiplicador[1]; //2 digitos se utilizaran 
        reversores = resultados[0]*100 + resultados[1]*10 + resultados[2];//3digitos se utilizaran 
    }
    else if(NN>=31 && NN<100){
        reverso = multiplicador[0]*10 + multiplicador[1]; //2 digitos se utilizaran 
        reversores = resultados[0]*1000 + resultados[1]*100 + resultados[2]*10 + resultados[3];//4 digitos se utilizaran 
    }
    else if(NN>=100 && NN<317){
        reverso = multiplicador[0]*100 + multiplicador[1]*10 + multiplicador[2]; //3digitos se utilizaran 
        reversores = resultados[0]*1000 + resultados[1]*100 + resultados[2]*100 + resultados[3]*10 + resultados[4];//5 digitos se utilizaran 
    }
    else if(NN>=317 && NN<1000){
        reverso = multiplicador[0]*100 + multiplicador[1]*10 + multiplicador[2]; //3digitos se utilizaran 
        reversores = resultados[0]*100000 + resultados[1]*10000 + resultados[2]*1000 + resultados[3]*100 + resultados[4]*10 + resultados[5];//6 digitos se utilizaran 
    }
    
    


    int RR = NN * NN;//guarda variable del cuadrado
    int R1 = reverso * reverso;// variable del cuadrado del numero invertido

    if(reversores==R1){//verifico si se cumple la condicion de el numero invertido
        cout<<"El numero es: "<<NN<<endl;
        cout<<"El resultado de: "<<NN<<" * "<<NN<<" es: "<<RR<<endl;
        cout<<"El resultado de: "<<reverso<<" * "<<reverso<<" es: "<<R1<<"\n"<<endl;//despliego mensajes correspondientes para evidencia
    }
}

int main(){

    for(int i=10;i<=999;i++){//envio desde el 10 porque tiene 2 digitos y hasta el 999 porque tiene 3 digitos
        evalua(i);
    }
    

    return 0;
}