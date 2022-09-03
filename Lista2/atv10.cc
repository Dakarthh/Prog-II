#include <iostream>
#include <string>

using namespace std;

using std::string;

int incrementa(int *a){
    int b;
    b=1;
    *a = *a+b;
}

int main( ) {
    int b;
    cout << "Digite o valor a ser incrementado " <<endl;
    cin >> b;
    cout << "O valor inicial eh " << b <<endl;
    incrementa(&b);
    cout << "O valor final eh " << b;

}