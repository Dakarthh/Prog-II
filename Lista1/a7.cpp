#include <iostream>

using namespace std;
int fatorial(int x){
    if(x == 0 || x == 1)
      return 1;
    else{
      return x * fatorial(x - 1);
    }
  }
  
int main (){
    int a, b;
    cout << "Digite o numero inteiro positivo" <<endl;
    cin >> a;
    cout << "O fatorial de " << a << " é " << fatorial(a);

   
}
