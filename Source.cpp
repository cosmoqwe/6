#include<iostream>
#include<ctime>
using namespace std;
template <typename T>
T qsort(T *massiv, T size)
{
	int i = 0, j = size;
	int temp, p;
	p = massiv[size / 2];
	do
	{
		while (massiv[i] < p)i++;
		while (massiv[j] > p)j--;
		if (i <= j)
		{
			temp = massiv[i];
			massiv[i] = massiv[j];
			massiv[j] = temp;
			i++;
			j--;
		}
	} while (i <= j);
	if (j > 0) qsort<int>(massiv, j);
	if (size > i) qsort<int>(massiv + i, size - i);
	return massiv[size];
}
void search(int* massiv, int size)
{
	setlocale(0, "");
	for (int i = 0; i < size; i++)
	{
		if (massiv[i] % 3 == 0)
		{
			cout << "���������� �����, ������� ����� �������� �� 3: " << massiv[i];
			break;
		}
		else
		{
			cout << "������ ����� �� �������." << endl;
		}
	}
}
	/*if (massiv[i] % 3 == 0 )
	{
		cout << "���������� �����, ������� ����� �������� �� 3: " << massiv[i];
	}
	else
	{
		search(massiv, size);
		i++;
	}
	*/

	/*do
	{
		i < size;
		if (massiv[i] % a == 0)
		{
			cout << "���������� �����, ������� ����� �������� �� 3: " << massiv[i];
			break;
		}
		else if(massiv[i] % a != 0)
		{
			i++;
		}
	} while (massiv[i] % a != 0);*/

	/*int a;
	cin >> a;*/
	//if (a == massiv[i])
	//{
	//	cout << "��� ������� " << a << " ��������� � ������ " << i;
	//	break;
	//}
	//if (i == size - 1 && a != massiv[i])
	//{
	//	cout << "������ �������� �� �������.";
	//	break;
		/*if (a == massiv[i])
		{
			cout << "��� ������� " << a << " ��������� � ������ " << i;
			break;
		}
		else
		{
			cout << "������ �������� �� �������.";
		}*/
		/*do
		{
			i++;
			if (a == massiv[i])
			{
				cout << "��� ������� " << a << " ��������� � ������ " << i;
				break;
			}
			else if (i = size-1 && a != massiv[i])
			{
				cout << "������ �������� �� �������.";
				break;
			}
		} while (a != massiv[i]);*/

void main()
{
	srand(time(NULL));
	int size;
	cin >> size;
	int* massiv = new int[size];
	for (int i = 0; i < size; i++)
	{
		massiv[i] = 1 + rand() % 10000;
		cout << massiv[i] << " ";
	}
	qsort<int>(massiv, size);
	cout << endl << endl;
	for (int i = 0; i < size; i++)
	{
		cout << massiv[i+1] << " ";
	}
	search(massiv, size);
}