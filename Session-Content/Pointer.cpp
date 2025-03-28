#include <iostream>
using namespace std;


void display(int a[], int s) {
    for (int i = 0; i < s; i++)
        cout << a[i] << " ";
    cout << endl;
}

int main()
{
    /* Pointer
    int x = 10;
    int* ptr = &x;

    cout << x << endl; // value
    cout << &x << endl; // address

    cout << *ptr << endl; // value
    cout << ptr << endl; // address
    
    x = 12;

    cout << *ptr << endl;
    */

    /* static array*/
    int arr[5] = { 1, 2, 3, 4, 5 };
    display(arr, 5);

    int size = 5;
    int* arr2 = new int[size];
    arr2[0] = 6;
    arr2[1] = 7;
    arr2[2] = 8;
    arr2[3] = 9;
    arr2[4] = 10;
    display(arr2, size);

    int* temp = new int[size * 2];
    for (int i = 0; i < 5; i++)
        temp[i] = arr[i];
    for (int i = 0; i < 5; i++)
        temp[i+5] = arr2[i];
    arr2 = temp;
    display(arr2, size * 2);
    return 0;
}