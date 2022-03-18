#include <iostream>
#include <string>

/*
* Ejercicio 61
* insertar un numero de 3 digitos, para restarle el mismo numero pero invertido
* Realizar procedimiento correspondiente para llevar a cabo lo anterior.
*/

//@Autor -> SelvinToledo
//@Date -> 11/03/2022 

using namespace std;

//funcion para veriricar el tamaño del numero es 3
int Check(int num){
    string Tam;//convierto numero en string
    Tam = to_string(num);
    return Tam.size();//regreso el tamaño del numero

}

void resta(int n){
    int num = n;

    int descompos[5];//separar los numeros entrantes en un arreglo
    int i = 0;//declaro indice
    while(n>0){
        descompos[i] = n%10;
        n = n/10;
        i++;//incremento indice
        //ciclo para descomponer numero
    }
    //al multiplicar en determinado order y sabiendo que es de 3 digitos se realiza
    //de la siguiente manera el invertir el numero:
    int rev = descompos[0]*100 + descompos[1]*10 + descompos[2];

    cout<<"El resultado es: "<<num<<" - "<<rev<<" = "<<num-rev<<endl;// imprimo el resultado obtenido
}

int main(){
    int N =0;
    cout<<"Inserte numero: ";
    cin>>N;//guardo el numero insertado en variable int
    
    if(Check(N)==3){//mando llamar al metodo de verificacion de 3 digitos
        resta(N);//si es de 3 digitos procede a la funcion de resta y despliegue
    }
    else{
        cout<<"El numero no es de 3 digitos"<<endl;//si el numero no cumple arroja mensaje 
    }
    return 0;
}