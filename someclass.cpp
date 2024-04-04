#include "someclass.h"
#include <string>

void someclass::setLength(int value) //метод для установки длины массива
{
	if (value != 0) {
		if (value > 0)
			length = value;
		else
			length = value * (-1);
	}
	resize(length);
	
}

unsigned int someclass::getLength() //возвращает значение длины массива
{
	return length;
}

const char* someclass::resulCalc()//метод для вычисления среднего значения всех элементов массива
{
	int mid = calcMidleValue(); //вычисляем среднее значение элементов массива вызовом метода
	int sum = calcSumOfValue(); //вычисляем сумму элементов массива вызовом метода

	std::string result = "Mid value: " + std::to_string(mid) +
		", sum of values: " + std::to_string(sum); //формируем строку
	return result.c_str(); //возвращаем строку в виде С-строки
	
}

int someclass::calcMidleValue() //метод для вычисления среднего значения элементов массива
{
	if (length == 0) {
		return 0;
	}
	else {
		int sum = calcSumOfValue(); //вычисляем сумму элементов массива вызовом метода
		return sum / length; //возвращаем среднее значение
	}
	
}

int someclass::calcSumOfValue() //метод для вычисления суммы элементов массива
{
	int sum = 0;
	for (size_t i = 0; i < length; i++) {
		sum += mas[i];
	}
	return sum; //возвращаем сумму элементов массива
}

void someclass::resize(size_t newSize) //метод для изменения длины массива
{
	int* arr = new int[newSize]; //создаем новый массив с новым размером

	//копируем элементы из старого массива в новый
	for (int i = 0; i < std::min(length, newSize); i++) {
		arr[i] = mas[i];
	}

	//заполняем оставшиеся элементы нового массива нулями
	for (int i = length; i < newSize; i++) {
		arr[i] = 0;
	}

	delete[] mas; //освобождаем память старого массива
	mas = arr; //присваиваем новый массив
	length = newSize; //присваиваем новую длину
}
