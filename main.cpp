#include <iostream>
#include <cstring>

using namespace std;

int cautCar(char email[], char valoare);

int main()
{
    char email[100] = "mircea.ionescu@infoap.ro";

    int rez = cautCar(email, '@');

    if (rez >= 0)
        cout << "Valoarea cautata este pe pozitia:  " << rez + 1 << endl;
    else
        cout << "Valoarea cautata lipseste!" << endl;
    return 0;
}

 int cautCar(char email[], char valoare)//Numarul de caractere nu se transmite
{
    int i;

    for (i = 0; i < strlen(email); i++)
        if (email[i] == valoare)
            return i;
    return -1;//Nu s-a gasit
}
