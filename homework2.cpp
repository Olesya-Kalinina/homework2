#include <iostream>
#include "someclass.h"
using namespace std;

int main()
{
    int arr[] = { 0, 8, 6, 4, 2 };
    someclass obj(arr, sizeof(arr) / sizeof(arr[0]));//Создаем объект класса с заданным массивом и его длиной
    cout << "Длина массива: " << obj.getLength() << endl;
    cout << "Среднее значение и сумма элементов: " << obj.resulCalc() << endl;
    int n;
    cout << "Введите новую длину массива: ";
    cin >> n;
    obj.setLength(n);
    cout << "Длина массива: " << obj.getLength() << endl;
    cout << "Среднее значение и сумма элементов: " << obj.resulCalc() << endl;



    return 0;
}
