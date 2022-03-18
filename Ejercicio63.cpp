#include <iostream>
#include <string>

/*
* Ejercicio 63
* Determinar numeros enteros que al elevar al cuadrado el o los ultimos digitos sean
* igual al numero original.
* Encontrar numeros con esta condicion menores a 1000.
*/

//@Autor -> SelvinToledo
//@Date -> 13/03/2022 ?


using namespace std;

//metodo que verifica que se cumpla la condicion requerida
void verifica(int n){
    int N = n;//guardo el numero original en una variable
    int cuadrado = n*n; // guardo el cuadrado del numero original

    string T;
    T = to_string(cuadrado);//convierto a string al cuadrado del numero original

    int descompos[T.size()];//separaro los numeros entrantes en un arreglo
    int i = 0;//declaro indice
    while(cuadrado>0){
        descompos[i] = cuadrado%10;
        cuadrado = cuadrado/10;
        i++;//incremento indice
    }

    //cout<<descompos[2]*100 + descompos[1]*10 + descompos[0];
/*
    if(N>=4 && N<10){//2 digitos
        if(N == descompos[0]){
        cout<<N<<endl;
        }
    }
    else if (N>=10 && N<32)//3 digitos
    {
        if(N ==descompos[1]*10 + descompos[0]){
        cout<<N<<endl;
        }
    }
    else if(N>=32 && N<100){//4 digitos
        if(N ==descompos[1]*10 + descompos[0]){
        cout<<N<<endl;
        }
    }
    else if(N<=100 && N<317){//5 digitos
        if(N == descompos[2]*100 + descompos[1]*10 + descompos[0]){
        cout<<N<<endl;
        }
    }
    else{
        if(N == descompos[2]*100 + descompos[1]*10 + descompos[0]){//6 digitos
        cout<<N<<endl;
        }
    }

*/
    if(N<10){//al ser menor que 10 unicamente tiene 1 digito
        if(N == descompos[0]){// comparon con el ultimo digito
        cout<<N<<endl;
        }
    }
    else if(N>=10 && N<100){//al ser menor que 100 y mayor 10 tiene 2 digitos
        if(N == descompos[1]*10+descompos[0]){// comparo con los ultimos 2 digitos
        cout<<N<<endl;//si es asi imprimo
        }
    }
    else{//si no entra en las otras condiciones tiene que ser de 3 digitos
        if(N == descompos[2]*100+descompos[1]*10+descompos[0]){// al multiplicar por 10 y por 100 se crean los ultimos caracteres
        cout<<N<<endl;
        }
    }
    
}

int main(){
    printf("Numeros que cumplen condicion:\n");
    for(int i=4;i<1000;i++){// al ser menor que 1000 solamente se comparan los numeros
        verifica(i);// de 1, 2 y 3 digitos.
    }
    
    return 0;
}