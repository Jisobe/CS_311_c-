#include <vector>
// #include <array>
using namespace std;

void arrRev(int ints[], int size){

   int i = 0;
   int j = size - 1;

   while(i < (size/2)){
      // int temp = ints[i];
      // ints[i] = ints[j];
      // ints[j] = temp;
      swap(ints[i], ints[j]);
      i++;
      j--;
   }

}

void vecRev(vector<int>& vec){

   unsigned int i = 0;
   unsigned int j = vec.size() - 1;

   while(i < (vec.size()/2)){
      // int temp = vec[i];
      // vec[i] = vec[j];
      // vec[j] = temp;
      swap(vec.at(i), vec.at(j));
      i++;
      j--;
   }

}

int main(){
   return 0;
}