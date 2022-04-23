#include "sortd.h"

void insertS(int* mas, int n)
{
    int key;
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        key = i + 1;
        temp = mas[key];
        for (int j = i + 1; j > 0; j--)
        {
            if (temp < mas[j - 1])
            {
                mas[j] = mas[j - 1];
                key = j - 1;
            }
        }
        mas[key] = temp;
    }

}

double* insertS(double* mas, int n)
{
    int key;
    double temp;
    for (int i = 0; i < n - 1; i++)
    {
        key = i + 1;
        temp = mas[key];
        for (int j = i + 1; j > 0; j--)
        {
            if (temp < mas[j - 1])
            {
                mas[j] = mas[j - 1];
                key = j - 1;
            }
        }
        mas[key] = temp;
    }
    return mas;
}

void print(double* mas, int n) {
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
}

void print(int* mas, int n) {
    for (int i = 0; i < n; i++) {
        cout << mas[i] << " ";
    }
    cout << endl;
}