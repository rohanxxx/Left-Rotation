#include <iostream>
using namespace std;

void rotateLeft(int arr[], int rotation, int size);

int main()
{
    int size = 0;
    int rotation = 0;

    cin >> size >> rotation;

    int arr[size];

    for(int i = 0; i < size; i++)
        cin >> arr[i];

    rotateLeft(arr, rotation, size);

    for(int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}

void rotateLeft(int arr[], int rotation, int size)
{
    int arr2[size];

    for(int i = (size-1); i >= 0; i--)
    {
        if((i - rotation) < 0)
        {
            int j = 0;
            j = (size + (i-rotation));
        
            arr2[j] = arr[i];
        }
        else
            arr2[i-rotation] = arr[i];
    }

    for(int i = 0; i < size; i++)
        arr[i] = arr2[i];

    return;
}
