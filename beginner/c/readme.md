# Contents

## C Pointers

Array:

```c
int main() {
    int Array[10] = {99, 32, 53, 74, 123, 6, 3, 2, 9, 10};
    int ArraySize = sizeof(Array)/sizeof(Array[0]);
    int *pArray = Array; //This is pointer. The variable address (Array's address) is kept in this variable.
}
```

Int:

```c
int main() {
    int Array[10] = {99, 32, 53, 74, 123, 6, 3, 2, 9, 10};
    int ArraySize = sizeof(Array)/sizeof(Array[0]);
    int *pArray = &ArraySize; //This is pointer. The variable address (Array's address) is kept in this variable.
}
```

### 0_BubbleSortForInt.c
* [Pointer](https://github.com/aefecoban/examples/blob/ce3948c3c415a6cb556106a25e38921beedb395f/beginner/c/0_BubbleSortForInt.c#L11)
* [Function](https://github.com/aefecoban/examples/blob/ce3948c3c415a6cb556106a25e38921beedb395f/beginner/c/0_BubbleSortForInt.c#L20-L56)
* [Function prototype](https://github.com/aefecoban/examples/blob/ce3948c3c415a6cb556106a25e38921beedb395f/beginner/c/0_BubbleSortForInt.c#L4-L5)
* [Int Array](https://github.com/aefecoban/examples/blob/ce3948c3c415a6cb556106a25e38921beedb395f/beginner/c/0_BubbleSortForInt.c#L9)

### 1_IsThereThisNeedleInThisHaystack.c
* [Pointer](https://github.com/aefecoban/examples/blob/14cf2a642304f56d30c2a02629dbff616e1fb416/beginner/c/1_IsThereThisNeedleInThisHaystack.c#L33-L42)
* [Function](https://github.com/aefecoban/examples/blob/14cf2a642304f56d30c2a02629dbff616e1fb416/beginner/c/1_IsThereThisNeedleInThisHaystack.c#L53)
* [Function prototype](https://github.com/aefecoban/examples/blob/14cf2a642304f56d30c2a02629dbff616e1fb416/beginner/c/1_IsThereThisNeedleInThisHaystack.c#L5)
* [Char Array](https://github.com/aefecoban/examples/blob/14cf2a642304f56d30c2a02629dbff616e1fb416/beginner/c/1_IsThereThisNeedleInThisHaystack.c#L9-L10)
* [Boolean](https://github.com/aefecoban/examples/blob/14cf2a642304f56d30c2a02629dbff616e1fb416/beginner/c/1_IsThereThisNeedleInThisHaystack.c#L3)
