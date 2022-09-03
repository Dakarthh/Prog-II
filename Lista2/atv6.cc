#include <iostream>
#include <string>

using namespace std;

using std::string;
struct retangulo
{
int altura, largura;
};

int area(retangulo a){
    int produto;

    produto = a.altura * a.largura;

cout << "A area do retangulo eh " << produto <<endl;

    
}

int main(){
    retangulo b;
    cout << "digite a altura do retangulo" <<endl;
    cin >> b.altura;

    cout << "digite a largura do retangulo" <<endl;
    cin >> b.largura;

    area(b);

}

