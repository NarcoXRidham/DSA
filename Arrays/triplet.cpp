#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cout << arr[i] << "," << arr[j] << "," << arr[k] << endl;
                cout << "Pair sum is =" << arr[i] + arr[j] + arr[k] << endl;
            }
        }
    }
}