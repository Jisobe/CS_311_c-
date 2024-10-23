#include <iostream>
#include <array>
using namespace std;

// using swap
void bubbleSortArr(int arr[], int size){

   for (int i = 0; i < size; i++){
      for (int j = i + 1; j < size; j++){
         if(arr[i] > arr[j]){
            swap(arr[i], arr[j]);
         }
      }
   }
}

// // using temp val
// void bubbleSortArr(int array[], int size){

//    int i ,j;
//    int temp;
//    bool switched = false;

//    for(i = 0; i < size - 1; i++){
//       for(j = 0; j < size - 1 - i; j++){
//          if(array[j] < array[j + 1]){
//             temp = array[j];
//             array[j] = array[j + 1];
//             array[j + 1] = temp;
//             switched = true;
//             // swap(array[j], array[j + 1]);
//          }
//       }

//       if(!switched){
//          break;
//       }
//    }
// }

void bubbleSortVect(vector<int>& vect){

   for (unsigned int i = 0; i < vect.size(); i++){
      for (unsigned int j = i + 1; j < vect.size(); j++){
         if(vect.at(i) < vect.at(j)){
            swap(vect.at(i), vect.at(j));
         }
      }
   }
}

void printArray(int array[], int size){
   for(int i = 0; i < size; i++){
      cout << array[i] << ", ";
   }
   cout << endl;
}

void printVect(const vector<int>& vect){
   for(auto num : vect){
      cout << num << " ";
   }
   for(unsigned int i = 0; i < vect.size(); i++){
      cout << vect.at(i) << ", ";
   }
   cout << endl;
}

int main() {

   int myArr[] = {10, 20, 30, 40};
   vector<int> myVect = {5,2,4,6,1,3};
   int size = 4;
   vector<int> returnVal;

   bubbleSortArr(myArr, size);
   bubbleSortVect(myVect);
   printVect(myVect);
   printArray(myArr, size);

   return 0;
}