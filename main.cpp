#include <iostream>
#include <stdlib.h>//для бібліотеки random
using namespace std;

int main() {
		int variable;
		int arr[7];
		for (int i = 0; i < 7; i++) {
			arr[i] = rand()%100;//генеруємо числа в масив від 0 до 100
		}
  cout<<"New array is:"<<endl;
 	for (int i = 0; i < 7; i++) {
			cout << arr[i] << ' ';
		}
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				if (arr[j] > arr[j + 1]) {//якщо даний елемент більший за наступний
					variable = arr[j];//записуємо елемент в змінну
					arr[j] = arr[j + 1];//змінна тепер приймає значення наступної змінної
					arr[j + 1] = variable;//наступна змінна бере значення попередньої
				}
			}
		}
    cout<<"\nSorted array is:"<<endl;
		for (int i = 0; i < 7; i++) {
			cout << arr[i] << ' ';
		}
	}
