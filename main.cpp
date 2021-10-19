#include <iostream>

/* Encontrar la varianza muestral de un arreglo de números.
 * Para este ejercicio recibirás una serie o un arreglo de números y con base en estos
 * tendrás que usar la fórmula de la media muestral para obtener la media de los datos.
 * */


using namespace std;

void addNumbers();
void media();
int n,*numbers;

void addNumbers(){

    cout<<"Tamaño del arreglo ";
    cin>>n;

    cout<<"\nIngresa los numeros "<<endl;
    numbers = new int [n];

    for(int i=0; i<n; i++){
        cin>>numbers[i];
    }
}

void media(){
    int sum = 0, media =0;
    for(int i=0; i<n;i++){
        sum += numbers[i];
    }

    media = sum / n;

    cout<<"\nLa media es "<<media<<endl;
}

int main() {

    addNumbers();
    media();

    delete[] numbers;

    return 0;
}