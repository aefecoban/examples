#include <iostream>
#include <Windows.h>
#include <direct.h>
#include <string>
#include <stdbool.h>
#include <iostream>
#include <fstream>
#include <filesystem>

#ifdef FILENAME_MAX
#define FILENAME_MAX 200
#endif

using namespace std;


bool example_fileGetContent(char* pFileName, string* pString);

int main(){
  string whereAmI = f_whereAmI();
	whereAmI = whereAmI + "\\";

	string controlFile = whereAmI.append("control.txt");
	char* c_controlFile = (char*)(calloc(sizeof(char), controlFile.length()));

	string data;
	string* pData;
	pData = &data;

	if (!example_fileGetContent(c_controlFile, pData)) {
		cout << "Error";
	}

	cout << data;
  
  return 1;
}

bool example_fileGetContent(char* pFileName, string* pString) {
	
	int i = 0;
	int j = 0;
	while (*(pFileName + i) != '\0') {
		i++;
	}
	i++;

	char *fileName = (char*)(calloc(sizeof(char), i));
	while (j < i) {
		*(fileName + j) = *(pFileName + j);
		if ((j + 1) == i) {
			*(fileName + j + 1) = '\0';
		}
		j++;
	}

	if (f_fileExists(fileName)) {
		
		ifstream file;
		file.open(fileName);

		if (file.fail()) {
			return false;
		}

		string text;
		while (getline(file, text)) {
			*(pString) = *(pString)+text;
		}
		file.close();
		return true;

	}

	return false;
}
