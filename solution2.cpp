#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string FP;
    int qt = 0;
    cout << "Digite a palavra ou frase que voçê quer descobrir quantas letras A tem nela" << endl;
    getline(cin, FP);
    for (char l : FP)
    {
        if (l == 'A' || l == 'a')
        {
            qt++;
        }
    }

    cout << "A frase/palavra " << "'" << FP << "'" << " contem " << qt << " letras 'A' " << endl;

    return 0;
}