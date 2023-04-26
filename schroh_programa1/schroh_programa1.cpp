#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    int dia, mes;

    cout << "Introduzca su mes de nacimiento y su dia para saber su signo zodiacal" << endl;

    cout << "Mes de nacimiento: " << endl;
    cin >> mes;

    cout << "Dia de nacimiento: " << endl;
    cin >> dia;

    if ((mes == 12 && (dia >= 22) && (dia <= 31)) || (mes == 1 && dia <= 20))
    {
        cout << endl
             << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Tu signo es Capricornio" << endl;
    }
    else if ((mes == 1 && (dia >= 21) && (dia <= 31)) || (mes == 2 && dia <= 19))
    {
        cout << endl
             << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Tu signo es Acuraio" << endl;
    }

    else if ((mes == 2 && (dia >= 20) && (dia <= 28)) || (mes == 3 && dia <= 20))
    {
        cout << endl
             << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Tu signo es Piscis" << endl;
    }

    else if ((mes == 3 && (dia >= 21) && (dia <= 31)) || (mes == 4 && dia <= 20))
    {
        cout << endl
             << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Tu signo es Aries" << endl;
    }

    else if ((mes == 4 && (dia >= 21) && (dia <= 30)) || (mes == 5 && dia <= 21))
    {
        cout << endl
             << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Tu signo es Tauro" << endl;
    }

    else if ((mes == 5 && (dia >= 22) && (dia <= 31)) || (mes == 6 && dia <= 21))
    {
        cout << endl
             << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Tu signo es Geminis" << endl;
    }

    else if ((mes == 6 && (dia >= 22) && (dia <= 30)) || (mes == 7 && dia <= 22))
    {
        cout << endl
             << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Tu signo es Cancer" << endl;
    }

    else if ((mes == 7 && (dia >= 23) && (dia <= 31)) || (mes == 8 && dia <= 22))
    {
        cout << endl
             << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Tu signo es Leo" << endl;
    }

    else if ((mes == 8 && (dia >= 23) && (dia <= 31)) || (mes == 9 && dia <= 22))
    {
        cout << endl
             << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Tu signo es Virgo" << endl;
    }

    else if ((mes == 9 && (dia >= 23) && (dia <= 30)) || (mes == 10 && dia <= 22))
    {
        cout << endl
             << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Tu signo es Libra" << endl;
    }

    else if ((mes == 10 && (dia >= 23) && (dia <= 31)) || (mes == 11 && dia <= 22))
    {
        cout << endl
             << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Tu signo es Escorpio" << endl;
    }

    else if ((mes == 11 && (dia >= 23) && (dia <= 30)) || (mes == 12 && dia <= 22))
    {
        cout << endl
             << "Dia: " << dia << endl;
        cout << "Mes: " << mes << endl;
        cout << "Tu signo es Sagitario" << endl;
    }

    else if (mes > 12)
    {
        cout << "Estas introduciendo un mes invalido";
    };

    string festejarCumple;

    cout << endl
         << "Te gusta festejar tu cumpleaños?" << endl;

    cin >> festejarCumple;

    if (festejarCumple == "Si" || festejarCumple == "si" || festejarCumple == "SI")
    {
        cout << "Que Bueno!" << endl;
        if (true)
        {
            float number;
            cout << "\n Cual es el numero de invitados a tu cumpleaños?: " << endl;
            cin >> number;

            number = round(sqrt(pow(number, 4)));

            int invitados = (float)number;

            cout << "El total de invitados es: " << invitados;
        };
    }
    else if (festejarCumple == "No" || festejarCumple == "no" || festejarCumple == "NO")
    {
        cout << "Que Lastima." << endl;
    }
    else
    {
        cout << "Error introduce Si o No" << endl;
    }

    return 0;
};