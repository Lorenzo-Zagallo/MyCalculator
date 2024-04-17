// CalculatorTutorial.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include "Calculadora.h";

using namespace std;

int main()
{
    double x = 0.0;
    double y = 0.0;
    double resultado = 0.0;
    char oper = '+';

    cout << "Aplicativo de Calculadora de Console" << endl << endl;
    cout << "Por favor, entre com a operacao. Formato: a+b / a-b / a*b / a/b" << endl;

    Calculadora c;
    while (true)
    {
        cin >> x >> oper >> y;
        if (oper == '/' && y == 0)
        {
            cout << "Divisao por zero!" << endl;
            continue;
        }
        else
        {
            resultado = c.Calcula(x, oper, y);
        }
        cout << "Resultado de " << x << oper << y << " eh: " << resultado << endl;
    }

    return 0;
}