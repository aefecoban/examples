#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool IsThisStringInTheText(char *Haystack, char *Needle, int TextSize, int NeedleSize);

int main() {
	
	char Text[1024] = "This text is here.";
	char Needle[10] = "This";
	
	bool IsHere = false;
	
	/*
	Array Size:
	int Size = sizeof(Text) / sizeof(Text[0]);
	but our array may not be completely full.
	*/
	
	int TextSize = 0;
	while(Text[TextSize] != '\0'){
		TextSize++;
	}
	int NeedleSize = 0;
	while(Needle[NeedleSize] != '\0'){
		NeedleSize++;
	}
	
	printf("Text Size is %d\n", TextSize);
	
	printf("Needle Size is %d\n", NeedleSize);
			
	/*
	pointer:
	char *pText = Text;
	char *pNeedle = Needle;
	
	Ishere = IsThisStringInTheText(pText, pNeedle);
	but array names are pointers.
	*/
	
	IsHere = IsThisStringInTheText(Text, Needle, TextSize, NeedleSize);
	
	if(IsHere){
		printf("The needle was found in the haystack.");
	}else{
		printf("The needle was not found in the haystack.");
	}
	
	return 0;
}

bool IsThisStringInTheText(char *Haystack, char *Needle, int TextSize, int NeedleSize){
	
	char TempText[TextSize];
	char TempNeedle[NeedleSize];
	
	int i, j, ControlSize;
	ControlSize = 0;
	
	printf("\nText: ");
	for(i = 0; i < TextSize; i++){
		TempText[i] = *(Haystack + i);
		printf("%c", TempText[i]);
	}
	printf("\nNeedle: ");
	for(i = 0; i < NeedleSize; i++){
		TempNeedle[i] = *(Needle + i);
		printf("%c", TempNeedle[i]);
	}
	printf("\n");
	
	for(i = 0; i < NeedleSize; i++){
		for(j = 0; j < TextSize; j++){
			if(ControlSize == NeedleSize){
				break;
			}
			
			if(TempNeedle[i] == TempText[j]){
				ControlSize++;
				break;
			}
			
		}
		if(i == 0){
			if(ControlSize == 0){
				break;
			}
		}
		if(ControlSize == NeedleSize){
			break;
		}
	}
	
	if(ControlSize == NeedleSize){
		return true;
	}else{
		return false;
	}
	
}
