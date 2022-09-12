#include <iostream>
#include <memory>
#include <vector>

using namespace std;

vector<int> * create(){
 vector<int> *a = new vector<int>{};
return a;
}

void insert(vector<int> *a, int valor){
    a->push_back(valor);
}

void imprime(vector<int> *a){
    for (auto c : *a)
    cout << c <<endl;
    }
int main(){
   auto x = create();
    insert(x, 23);
    imprime(x);
    delete x;
}
