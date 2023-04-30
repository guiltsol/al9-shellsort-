#include "iostream"
#include "time.h"
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;


void shellsort(int* arr, int n, int st) {
	long long int c = 0;
	long long int t = 0;
	for (st;st > 0;st /= 2) {
		for (int i = st;i < n;i++) {
			
			int tmp = arr[i];
			int j;
			for (j = i;j >= st && arr[j - st] > tmp;j -= st) {
				arr[j] = arr[j - st];
				c++;
				t++;
			}
			arr[j] = tmp;
			t++;
			//cout << "step= " << st << endl;
			//for (int i = 0;i < n;i++) {
			//	cout << arr[i] << " ";
			//}
			//cout << endl;

		}


	}
	cout << "c= " << c << endl;
	cout << "t= " << t << endl;
}
void shellsort2(int* arr, int n, int* arr2, int k) {
	int l = arr2[0];
	int z = 0;
	while(l>=1) {
		for (int i = l;i < n;i++) {
			int tmp = arr[i];
			int j;
			for (j = i;j >= l && arr[j - l] > tmp;j -= l) {
				arr[j] = arr[j - l];
			}
			arr[j] = tmp;
			cout << "step= " << l << endl;
			for (int i = 0;i < n;i++) {
				cout << arr[i] << " ";
			}
			cout << endl;

		}
		z++;
		l = arr2[0+z];

	}

}
void vibor(int* array,int SIZE) {
	int temp;
	int comparison = 0;
	int transfer = 0;
	for (int i = 0; i < SIZE - 1; i++)
	{
		int min = i;                                           // индекс минимального элемента
		for (int j = i + 1; j < SIZE; j++)
		{
			comparison++;                                  // инкремент сравнений
			if (array[j] < array[min])                     // если текущий элемент меньше минимального 
			{
				min = j;                                        // запоминаю его индекс
			}
		}
		temp = array[i];                                     //
		array[i] = array[min];                             // меняю их местами
		array[min] = temp;                                 //
		transfer++;						  // инкремент пересылок
	}
	cout << "trans = " << transfer << endl;
	cout << "comp = " << comparison << endl;
}
void ss(int n, int* mass)
{
	long long int c = 0;
	long long int t = 0;
	int i, j, step;
	int tmp;
	for (step = n / 2; step > 0; step /= 2)
		for (i = step; i < n; i++)
		{
			tmp = mass[i];
			for (j = i; j >= step; j -= step)
			{
				c++;
				if (tmp < mass[j - step]) {
					mass[j] = mass[j - step];
					t++;
				}
				else
					break;
			}
			mass[j] = tmp;
		}
	cout << "c= " << c << endl;
	cout << "t= " << t << endl;
}
void shelltest2(int* arr, int n, double* arr2) {
	int l = arr2[0];
	int z = 0;
	while (l >= 1) {
		for (int i = l;i < n;i++) {
			int tmp = arr[i];
			int j;
			for (j = i;j >= l && arr[j - l] > tmp;j -= l) {
				arr[j] = arr[j - l];
			}
			arr[j] = tmp;
			cout << "step= " << l << endl;
			for (int i = 0;i < n;i++) {
				cout << arr[i] << " ";
			}
			cout << endl;

		}
		z++;
		l = arr2[0 + z];

	}

}void shelltest1(int* arr, int n, int st) {
	long long int c = 0;
	long long int t = 0;
	for (st;st > 0;st/=1.3) {
		for (int i = st;i < n;i++) {

			int tmp = arr[i];
			int j;
			for (j = i;j >= st && arr[j - st] > tmp;j -= st) {
				arr[j] = arr[j - st];
				c++;
				t++;
			}
			arr[j] = tmp;
			t++;
			cout << "step= " << st << endl;
			for (int i = 0;i < n;i++) {
				cout << arr[i] << " ";
			}
			cout << endl;

		}


	}
	cout << "c= " << c << endl;
	cout << "t= " << t << endl;
}
int main()
{
	srand(time(NULL));
	//1-2
	/*
	int a[10] = { 5,0,6,4,9,7,9,2,1,0 };
	for (int i = 0;i < 10;i++) {
		cout << a[i] << " ";
	}
	*/
	cout << endl;
	//3
	/*
	int j;
	
	cout << "3) input N mass: ";
	cin >> j;
	int* mass = new int[j];
	for (int i = 0;i < j;i++) {
		mass[i]=rand()%50;
	}
	for (int i = 0;i < j;i++) {
		cout << mass[i]<<" ";
	}
	cout << endl;
	int h;
	cout << "input kol steps: ";
	cin >> h;
	int* ah = new int[h];
	cout << "input posledov steps: ";
	for (int i = 0;i < h;i++) {
		cin >> ah[i];
	}
	*/
	//4
	
	
	int* ranmas = new int[20];
	for (int i = 0;i < 20;i++) {
		ranmas[i] = rand() % 50;
	}

	for (int i = 0;i < 20;i++) {
		cout << ranmas[i] << " ";
	}
	cout << endl;
	cout << "-------------" << endl;
	//default sort
	//shellsort(a, 10, 3);
	// mass steps
	//shellsort2(mass, j, ah,h);
	//4
	//ss(2048,ranmas);
	//5
	shelltest1(ranmas, 20,20);
	cout << "*****************************************" << endl;
	double xi = cbrt((16 * 20) / M_PI);
	double arr2[2] = {xi,1};
	shelltest2(ranmas, 20, arr2);
	system("pause");

	return 0;
}