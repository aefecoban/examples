#include <iostream>
#include <string>
#include <stdbool.h>
#include <iostream>
#include <fstream>
#include <filesystem>

bool example_FileExists(char* c_controlFile);

int main() {
	
  string sFile = "test.txt";
	char* pChar = (char*)(calloc(sizeof(char), sFile.length()));

	int i = 0;
	while (sFile[i] != '\0') {
		*(pChar + i) = sFile[i];
		if (sFile[i + 1] == '\0') {
			*(pChar + i + 1) = '\0';
		}
		i++;
	}
  
	if (example_FileExists(pChar)) {
			cout << "File exists";
	} else {
			cout << "file does not exist";
	}
  
	return 1;
}

bool example_FileExists(char *pChar) {
	FILE* cFile;
	errno_t fileErrorControl = fopen_s(&cFile, pChar, "r");

	if (fileErrorControl == 0) {
		return true;
	} else {
		return false;
	}

}
