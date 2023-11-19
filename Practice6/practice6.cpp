#include <stdio.h>
#include <Windows.h>
#include <iostream>


int main() {
	setlocale(LC_ALL, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int type = 1;
	int numbers[5] = {1,1,1,1,1};
	int size = sizeof(numbers) / sizeof(numbers[0]);
	for (int i = 0; i < size; i++) {
		scanf_s("%i", &type);
		numbers[i] = type;		
	}

	int minNonNegative = 101;

	for (int i = 0; i < size; i++) {
		if (numbers[i] >= 0 && numbers[i] < minNonNegative) {
			minNonNegative = numbers[i];
		}
	}

	for (int i = 0; i < size; i++) {
		if (numbers[i] < 0) {
			numbers[i] = minNonNegative;
		}
	}

	for (int i = 0; i < size; i++) {
		printf("%d\n", numbers[i]);
	}
}