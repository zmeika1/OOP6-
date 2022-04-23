#include "sortd.h"
int main()
{
    setlocale(LC_ALL, "Rus");
    int n;
    cin >> n;
    int* mas = new int[n];
    double* masd = new double[n];
    for (int i = 0; i < n; i++)
    {
        cin >> mas[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> masd[i];
    }
    insertS(mas, n);
    insertS(masd, n);
    print(mas, n);
    print(masd, n);
    delete[] masd;
    delete[] mas;
}