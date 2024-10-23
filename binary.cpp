#include <vector>
using namespace std;

void vecRev(vector<int>& vec){

   unsigned int i = 0;
   unsigned int j = vec.size() - 1;

   while(i < (vec.size()/2)){
      int temp = vec[i];
      vec[i] = vec[j];
      vec[j] = temp;
      i++;
      j--;
   }
}

vector<int> decimalToBinary(int decimalVal){

   vector<int> output;

   while(decimalVal > 0){
      output.push_back(decimalVal % 2);
      decimalVal /= 2;
   }

   vecRev(output);

   return output;
}

int main() {

   vector<int> returnVal;

   returnVal = decimalToBinary(8);

   return 0;
}