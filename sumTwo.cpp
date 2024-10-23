#include <vector>
using namespace std;

vector<int> sumTwo(int arr[], int size, int target){

   vector<int> output;

   for(int i = 0; i < size; i++){
      for (int j = i + 1; j < size; j++){
         if (arr[i] + arr[j] == target){
            output.push_back(i);
            output.push_back(j);
            return output;
         }
      }
   }

   return output;
}