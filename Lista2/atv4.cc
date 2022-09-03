#include <iostream>
#include <string>

using namespace std;
using std::string;

int main(){

string name;

cout << "Digite a frase onde os espaços são removidos";
    getline(cin, name);  


  for (auto c:name ){

  if (!isspace(c)){
    cout << c <<endl;
  }
  }
}