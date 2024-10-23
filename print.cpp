#include <vector>
#include <iostream>
using namespace std;

void printVect(const vector<int>& vect){
   for(auto num : vect){
      cout << num << " ";
   }
   for(unsigned int i = 0; i < vect.size(); i++){
      cout << vect.at(i) << " ";
   }
}

void printArr(const int ints[], int size){
   for(int i = 0; i < size; i++){
      cout << ints[i] << " ";
   }
   cout << endl;
}