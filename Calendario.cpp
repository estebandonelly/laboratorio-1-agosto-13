#include <iostream>

using namespace std;

//Aqui se declaran las variables globales

//Aqui se declaran los prototipos de las funciones

int main(){

    int anio;
    int dia;
    int mes;

    printf("\nIngrese el anio: ");
    scanf("%d",&anio);
    printf("\nIngrese el mes: ");
    scanf("%e",&mes);
    printf("\nIngrese el dia: ");
    scanf("%f",&dia);


    //Esta funcion es la mas importante del programa
    //En esta funcion se deben invocar las funciones que
    //usted codifique en C++

    //Declarando una variable localecon
    bool verifica_fecha;

    //Aqui puede invocar su funcion

    if(anio%4==0)

        printf("\nEl año %d es visiesto: ", anio);

    else

        printf("\nEl año %d no es visiesto: ", anio);

    if ( (mes=2)&&(dia <1)&&(dia>=29))

        printf("\nFecha incorrecta: "
               );
    else

        printf("\nFecha correcta: "
               );


return 0;
}
