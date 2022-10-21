#include <iostream>
#include <ctime>
using namespace std;
//int *getProductArrayExceptSelf(int *arr, int n);

int *getProductArrayExceptSelf(int *arr, int n)
{
    int *T;
    int i = 0, a = 1;
    T = new int[n];
    while (i <= n)
    {

        for (int j = 0; j <= n - 1; j++)
        {
            if (i != j)
                a = a * arr[j];
        }
        T[i] = a;
        a=1;
        i++;
    }
    
    return T;
    delete [] T;
}
int main()
{
    int size, arr[100];
    int *ptr;
    cout << "Donner un le nombre d'élément du tableau" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    ptr = getProductArrayExceptSelf(&arr[0], size);

    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
    return 0;
}