//Arrays
#include <iostream>
#include "windows.h"

using namespace std;

#define BITWISE_OPERATORS_TASK
#define ARRAYS_TASK

void main()
{
	setlocale(LC_ALL, "");
	//const int n = 5;
	//int arr[n] = {3, 5, 8};
	////arr[1] = 1024;  //Обращение к элементу массива на запись.
	////arr[3] = 3072;
	////cout << arr[1] << endl; //Обращение к элементу массива на чтение.
	//for (int i = 0; i < n; i++)
	//{
	//	cout << arr[i] << "\t";
	//}
	//cout << endl;

#ifdef BITWISE_OPERATORS_TASK
	int a = 5;
	int b = 7;
	a ^= b ^= a ^= b;
	cout << a << " " << b << endl;
#endif



#ifdef ARRAYS_TASK
	int choose = 0;
	//Создаем массив
	const int size = 5;
	int array[size]{ 0,0,0,0,0 };

	//Делаем цикл для записи значений массива
	for (int i = 0; i < size; i++)
	{
		cout << "Введите значения для эллемента массива "<< i <<": ";
		cin >> array[i];
	}
	cout << endl;
	cout << "Выбирете действие:" << endl;
	cout << "1. Вывести эллемента массива в прямом порядке." << endl;
	cout << "2. Вывести эллементы массива в обратном порядке." << endl;
	cout << "3. Посчитать сумму всех эллементов массива." << endl;
	cout << "4. Посчитать средне-арифметическое всех эллементов массива." << endl;
	cout << "5. Найти минимальный и максимальный эллемент массива." << endl;
	cin >> choose;

		//Цикл для вывода значений в прямом порядке
	if (choose == 1)
	{
		for (int i = 0; i < size; i++)
		{
			cout << array[i] << "\t";
		}			
	}

		//Цикл для вывода массива в обратном порядке
	else if (choose == 2)
	{
		for (int i = size-1; i >= 0; i--)
		{
			cout << array[i] << "\t";
		}
	}

		//Блок для суммирования эллементов массива
	else if (choose == 3)
	{
		cout << array[0] + array[1] + array[2] + array[3] + array[4] << endl;
	}

		//Блок для нахождения средне-арифметического эллементов массива
	else if (choose == 4)
	{
		cout << (array[0] + array[1] + array[2] + array[3] + array[4]) / size << endl;
	}

		//Блок определения минимального и максимального значения эллементов.
	else if (choose == 5)
	{
		int min = array[0];
		int max = array[0];

		for (int i = 0; i < size; i++)
		{
			if (min > array[i])
			{
				min = array[i];
			}
			if (max < array[i])
			{
				max = array[i];
			}
		}
		cout << "Минимальное значение равно " << min << endl;
		cout << "Максимально значние равно " << max << endl;
	}

	else
	{
		cout << "Неправильно задан параметр.";
		cout << endl;
		for (int i = 0; i < 25; i++)
		{
			Sleep(250);
			cout << ".";
		}
		cout << endl;
		cout << "Прекращение работы программы.";
	}
#endif
}