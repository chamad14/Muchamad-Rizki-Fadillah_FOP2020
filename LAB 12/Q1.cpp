#include <iostream>
using namespace std;

//fx prototype
void printArray (int[], int);
void swap (int[], int, int);

int main() {
    const int SizeArray = 7;
    int myArray[SizeArray] = {1, 4, 7, 2 , 6 , 3 , 5 };
    //ascending ubah </>
    for(int i = 0; i < SizeArray - 1; i++){
        int x = i;
        for (int j = i + 1; j< SizeArray; j++){
            if (myArray[j] < myArray[x])
                x = j;
        }
        swap(myArray, x, i);
    }
    
   printArray (myArray, SizeArray);
    return 0;
}

void printArray (int list[], int size){
    
    cout << "{";
    for(int i = 0 ; i < size; i++){
        if (i != size - 1)
            cout << list[i] << ", ";
        else
            cout << list[i] << "}" << endl;
    }
}

 //ascending
void swap (int myList[], int x, int i){
  char temp;

  temp = myList[x];
  myList[x] = myList[i];
  myList[i] = temp;

}
