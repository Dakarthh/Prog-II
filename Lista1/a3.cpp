#include <iostream>

using namespace std;

int par(int a[]){
    for(int i=0; i<10; i++){
        if (a[i] % 2 == 0)
            cout << a[i] <<endl;    
    }
}

int main(){
    int v[10];
        for(int j=0; j<10; j++){    
            cout << "Digite 10 valores ";
            cin >> v[j];
        }
        par(v);
    


}