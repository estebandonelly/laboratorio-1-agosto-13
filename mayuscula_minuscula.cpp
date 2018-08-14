#include<iostream>
#include<string>
#include<sstream>

using namespace std;

void minuscula (string &pal){

    for (int i=1; i<pal.length(); i++){
        pal[i] = tolower(pal[i]);
    }
}

int main(){
    string palabra;

    cout<<"Digite una palabra: ";

    getline(cin,palabra);

    palabra[0]=toupper(palabra[0]);

    minuscula(palabra);

    cout<<endl
          ;

    cout<<(palabra)
          ;

return 0;
}
