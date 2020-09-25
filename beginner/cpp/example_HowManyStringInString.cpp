#include <iostream>
#include <string>
#include <stdbool.h>

int howManyStringInString(string text, string search, int** pArray);

int main(int argc, char* argv[]) {

	/*
	string text = "Bu bir metindir ve metinler uzun verileri icinde barindirabilir.";
	string search = "i";
	int* pArray;
	pArray = (int*)(calloc(sizeof(int), 1));
	int** p = &pArray;

	int howMany = howManyStringInString(text, search, p);

	if (howMany > 0) {
		cout << howMany << " founded." << endl << endl;
		
		int i = 0;
		while (true) {
			int value = *(pArray + i);
			if (value == '\0') {
				break;
			} else {
				cout << value << endl;
			}
			i++;
		}
	}*/
  
  return 1;
}

int howManyStringInString(string text, string search, int** pArray) {
	
	int where = 0;
	int i = 0;
	int area = 5;
	int *locations = (int*)(calloc(sizeof(int), area));
	int totalFound = 0;
	
	while (i < text.length()) {
		whereS = text.find(search, whereS);
		if (whereS < 0) {
			i = text.length();
		} else {
			if (totalFound == area) {
				area = area + 5;
				locations = (int*)(realloc(locations, sizeof(int) * area));
			}
			*(locations + totalFound) = whereS;
			totalFound++;
		}
		whereS++;
		i++;
	}

	*pArray = (int*)(calloc(sizeof(int), (totalFound + 1)));
	cout << totalFound << "founded" << endl;
	
	for (int i = 0; i < (totalFound + 1); i++) {
		if (i == totalFound) {
			**(pArray + i) = '\0';
		} else {
			*(*pArray + i) = *(locations + i);
		}
		
	}

	return totalFound;
}
