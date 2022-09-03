#include <iostream>

using namespace std;
int somat(int a[], int tamanho){
    if (tamanho == 1)
    return a[0];
    
    return a[tamanho-1] + somat(a,tamanho-1);
}

int main(){

    int x;

    cout << "Digite a quantidade de números a serem calculados " <<endl;
    cin >> x;

    int soma;
    int media;

    int v[1000];
    cout << x;
    cout << "Digite os " << x << " valores ";
        for(int j=0; j<x; j++){    
            cin >> v[j];
                    }   

     soma = somat(v, x);
     media = soma/x;

     cout << "A soma dos valores é " << soma <<endl << "A media dos valores é " << media <<endl;

}