#include <iostream>

using namespace std;


int main(){

    int a, b;

    cout << "Digite a quantidade de quadrados a serem exibidos ";
    cin >> a;
     for(int i=1;i<a+1;i++){
        b = i*i;
        cout <<endl << b <<endl;
     }

}