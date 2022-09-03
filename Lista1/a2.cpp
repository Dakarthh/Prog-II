#include <iostream>


int main(){
    int f, c;

    cout << "Qual a temperatura em Fahrenheit? ";
    cin >> f;

    c = (f - 32) * 5/9;

    cout << "A temperatura em Celsius é aproximadamente " << c <<endl;

}