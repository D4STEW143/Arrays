#include <iostream>

using namespace std;

void main()
{
	setlocale(LC_ALL, "ru");

	//Создаем массив.
	const int size = 10;
	int array[size] = { 0,1,1,2,3,5,8,13,21,34 };

	//Запрашиваем операцию.
	int choose;
	cout << "Выберете сторону сдвига" << endl;
	cout << "1.Влево" << endl;
	cout << "2.Вправо" << endl;
	cin >> choose;

	//Запрашиваем число сдвига.
	int move_number = 0;
	cout << "Введите число сдвига: ";
	cin >> move_number;
	cout << endl;


	//Выводим оригинльный массив для сравнения
	for (int i = 0; i < size; i++)
	{
		cout << array[i] << "\t";
	}
	cout << endl;


	//Делаем сдвиг влево.
	if (choose == 1)
	{
		int first_array_value;
		for (int i = 0; i < move_number; i++)
		{
			first_array_value = array[0];
			for (int j = 0; j < size - 1; j++)
			{
				array[j] = array[j + 1];
			}
			array[size - 1] = first_array_value;

			for (int i = 0; i < size; i++)
			{
				cout << array[i] << "\t";
			}
			cout << endl;
		}
	}

	//Делаем сдвиг вправо.
	if (choose == 2)
	{
		int last_array_value;
		for (int i = 0; i < move_number; i++)
		{
			last_array_value = array[size - 1];
			for (int j = size - 2; j >= 0; j--)
			{
				array[j + 1] = array[j];
			}
			array[0] = last_array_value;

			for (int i = 0; i < size; i++)
			{
				cout << array[i] << "\t";
			}
			cout << endl;
		}
	}
}
