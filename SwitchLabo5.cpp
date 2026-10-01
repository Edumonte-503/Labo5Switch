#include <iostream>
using namespace std;
int main()
{
    int opc;
    float radio, lado, base, altura, formula;
    cout << "Menu de opciones a escoger" << endl
         << "1--> circulo, 2--> cuadrado y 3--> triangulo";
    cin >> opc;

    switch (opc)
    {
    case 1:
        cout << "La formula para calcular el circulo es: pi * radio * radio" << endl;
        cout << "Ingresa el valor del radio " << endl;
        cin >> radio;
        formula = 3.1416 * radio * radio;
        cout << formula;

        break;
    case 2:
        cout << "La formula para calcular el area del cuadrado es: lado * lado " << endl;
        cout << "Ingresa el valor del lado" << endl;
        cin >> lado;
        formula = lado * lado;
        cout << formula;
        break;

    case 3:
        cout << "La formula para calcular el triangulo es:(Base * altura)/2 " << endl;
        cout << "Ingresa el valor de la base" << endl;
        cin >> base;
        cout << "Ingresa el valor de la altura" << endl;
        cin >> altura;
        formula = (base * altura) / 2;
        cout << formula;
        break;

    default:
        cout << "Valor ingresado invalido";
    }

    return 0;
}