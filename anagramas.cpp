#include <iostream>
using namespace std;

bool anagramas(string a, string b){
    for(int i = 0; i < a.size();i++){
        if(b.find(a[i])==string::npos){
            return false;
        }

    }
    return true;
}

int main(){
    string a, b;
    printf("Ingrese la palabra 1: ");
    cin >> a;
    printf("Ingrese la palabra 2: ");
    cin >>b;
    if (anagramas(a,b)){
        cout <<"Son anagramas" <<endl;
    } else{
        cout<<"No son anagramas"<<endl;
    }
}

