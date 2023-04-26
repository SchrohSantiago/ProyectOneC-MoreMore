#include <iostream>

using namespace std;

int main()
{

    int dia, mes;

    cout << "Introduzca su mes de nacimiento y su dia para saber su signo zodiacal" << endl;

    cout << "Mes de nacimiento: " << endl;
    cin >> mes;

    cout << "Dia de nacimiento: " << endl;
    cin >> dia;

    switch (mes)
    {
    case 1:
        if ((dia >= 21) && (dia <= 31))
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Acuario" << endl;
        }
        else if (dia > 0 && dia < 21)
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Capricornio" << endl;
        }
        break;
    case 2:
        if ((dia >= 20) && (dia <= 28))
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Piscis" << endl;
        }
        else if (dia > 0 && dia < 20)
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Acuario" << endl;
        };
        break;
    case 3:
        if ((dia >= 21) && (dia <= 31))
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Aries" << endl;
        }
        else if (dia > 0 && dia < 21)
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Piscis" << endl;
        }
        break;
    case 4:
        if ((dia >= 21) && (dia <= 30))
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Tauro" << endl;
        }
        else if (dia > 0 && dia < 21)
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Aries" << endl;
        }
        break;
    case 5:
        if ((dia >= 22) && (dia <= 31))
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Geminis" << endl;
        }
        else if (dia > 0 && dia < 22)
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Tauro" << endl;
        }
        break;
    case 6:
        if ((dia >= 22) && (dia <= 30))
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Cancer" << endl;
        }
        else if (dia > 0 && dia < 22)
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Geminis" << endl;
        }
        break;
    case 7:
        if ((dia >= 23) && (dia <= 31))
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Leo" << endl;
        }
        else if (dia > 0 && dia < 23)
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Cancer" << endl;
        }

        break;
    case 8:
        if ((dia >= 23) && (dia <= 31))
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Virgo" << endl;
        }
        else if (dia > 0 && dia < 23)
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Leo" << endl;
        }

        break;
    case 9:
        if ((dia >= 23) && (dia <= 30))
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Libra" << endl;
        }
        else if (dia > 0 && dia < 23)
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Virgo" << endl;
        }
        break;
    case 10:
        if ((dia >= 23) && (dia <= 31))
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Escorpio" << endl;
        }
        else if (dia > 0 && dia < 23)
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Libra" << endl;
        }
        break;
    case 11:
        if ((dia >= 23) && (dia <= 30))
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Sagitario" << endl;
        }
        else if (dia > 0 && dia < 23)
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Escorpio" << endl;
        }
        break;
    case 12:
        if ((dia >= 22) && (dia <= 31))
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Capricornio" << endl;
        }
        else if (dia > 0 && dia < 22)
        {
            cout << endl
                 << "Dia: " << dia << endl;
            cout << "Mes: " << mes << endl;
            cout << "\nTu signo es Sagitario" << endl;
        }
        break;
    default:
        cout << "Fecha de nacimiento invalida.";
        break;
    }
    return 0;
}