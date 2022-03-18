#include <iostream>
using namespace std;

bool verifica(long long  n, int base){
   long long N = n;

    string T;
    T = to_string(n);
    
    long long descompos[T.size()];//separar los numeros entrantes en un arreglo
    long long i = 0;
    while(n>0){
        descompos[i] = n%10;
        n = n/10;
        i++;
    }
    for(long long x : descompos){
        if(x > base){
            return false;
        }
        else{
            return true;
        }
        
    }
}

int main(){
    for(int i=0; i<30;i++){
        if(verifica(i,9) == true){
            cout<<i<<endl;
            
        }
        
    }

    return 0;//pendiente
}