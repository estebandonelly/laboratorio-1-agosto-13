#include<iostream>
#include<conio.h>

using namespace std;

int main(){
    printf("Bienvenidos a la primera practica del curso de Informatica 2 en el semestre 2018_2..............     "
           );
    printf("");
    char dato;

    cout<<
          "Ingrese la palabra a buscar en el texto anterior  :  "<<endl;

    cin>>dato;

    char a[100] = {"Bienvenidos a la primera practica del curso de Informatica 2 en el semestre 2018_2"};

    int i;
    char band = 'F';



    i=0;
    while((band == 'F') && (i<50)){
        if(a[i] == dato){
            band = 'V';
        }
        i++;
    }

    if(band == 'F'){
        cout<<"la palabra a buscar no exixte"<<endl;
    }
    else if(band == 'V'){
        cout<<"la palabra a sido encontrada en la posicion: "<<i-1<<endl;
    }


    getch();
    return 0;
}
