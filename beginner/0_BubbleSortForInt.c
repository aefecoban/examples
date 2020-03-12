#include <stdio.h>
#include <stdlib.h>

void BubbleSortForInt(int *pArray, int ArraySize);
void BubbleSortPrint(int *pArray, int ArraySize);

int main() {

    int Array[10] = {99, 32, 53, 74, 123, 6, 3, 2, 9, 10};
    int ArraySize = sizeof(Array)/sizeof(Array[0]);
    int *pArray = Array;

    BubbleSortForInt(pArray, ArraySize);

    BubbleSortPrint(pArray, ArraySize);

    return 0;
}

void BubbleSortForInt(int *pArray, int ArraySize){

    int TempArray[ArraySize];

    for(int i = 0; i < ArraySize; i++){
        TempArray[i] = *(pArray + i);
    }

    for(int x = 0; x < ArraySize; x++){
        int control = 0;
        for(int y = 0; y < (ArraySize - 1); y++){
            if(TempArray[y] <= TempArray[y+1]){
                control++;
            }else{
                int TempA = TempArray[y];
                int TempB = TempArray[y+1];
                TempArray[y] = TempB;
                TempArray[y+1] = TempA;
            }
        }
        if(control == ArraySize){
            break;
        }
    }

    for(int z = 0; z < ArraySize; z++){
        *(pArray + z) = TempArray[z];
    }

}
void BubbleSortPrint(int *pArray, int ArraySize){

    for(int i = 0; i < ArraySize; i++){
        printf("\n%d", *(pArray + i));
    }

}
