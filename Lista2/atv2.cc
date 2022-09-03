#include <iostream>

using namespace std;

int main(){

string name;

int x;

cout << "Digite o que deve ser invertido" <<endl;
cin >> name;

x = name.size();

for (int i = x; i>=0;i--){
    cout << name[i];
}


}


