#include <iostream>
using namespace std;

int main()
{
    int X, n1 = 0, n2 = 1, fb = 0, ig = 0, i;
    cout << "Diga o numero que vc deseja inserir" << endl;
    cin >> X;
    if (X <= 1)
    {
        ig++;
    }
    for (i = 0; i < X; i++)
    {
        if (X == fb)
        {
            ig++;
        }
        fb = n1 + n2;
        n1 = n2;
        n2 = fb;
    }
    if (ig >= 1)
    {
        cout << "Esse numero pertence a sequencia" << endl;
    }
    else
    {
        cout << "Esse numero nao pertence a sequencia" << endl;
    }
    return 0;
}