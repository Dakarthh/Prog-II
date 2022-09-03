#include <iostream>

using namespace std;


int main(){

    int a, b, soma, an;

    cout << "Digite a quantidade de pares a serem somados ";
    cin >> a;
    an = (a-1)*2;
    soma = (an* a) /2;

    cout << "A soma dos " << a << "valores pares é " << soma <<endl;

}