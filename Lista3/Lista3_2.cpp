#include <iostream>
#include <memory>
#include <vector>

using namespace std;
unique_ptr<vector<int>> create_unique(){
    unique_ptr<vector<int>> c;
    return c;
}


shared_ptr<vector<int>> create(){
   auto b =make_shared <vector<int>>();
return b;
}

void insert(weak_ptr <vector<int>> a, int valor){
    if (auto x = a.lock())
    x->push_back(valor);
}

void imprime(weak_ptr <vector<int>> a){
    if (auto x = a.lock())
     for (auto j : *x)
        cout << j <<endl;
    }
int main(){
   auto z = create();
    insert(z, 23);
    imprime(z);
    unique_ptr<vector<int>> a(create_unique());
    
}
