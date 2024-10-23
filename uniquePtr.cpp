#include <iostream>
#include <memory>
using namespace std;

class UniquePointer{

  private:
    int* ptr; //raw pinter data mamber
  public:
    explicit UniquePointer(int* ptr); //constructor
    ~UniquePointer(); //destructor
    UniquePointer(const UniquePointer& source) = delete; //have to manually delete copy constructor to ensure it is unique
    UniquePointer& opertator(const UniquePointer& source) = delete;
    int& operator*();
};

UniquePointer::UniquePointer(int* ptr) : ptr(ptr){}
UniquePointer::~UniquePointer(){ 
  delete ptr; 
  ptr = nullptr;
}
int& UniquePointer::operator*(){ return *ptr; }


// main file

int main(){
  // smart pointers

  //unique pointer
  unique_ptr<int> x(new int); //creates a unique pointer object 
  *x = 10; //pointer is pointing to x that contains 10
  cout << *x << endl;

  auto y = make_unique<int>(10);//creates a unique pointer object 

  auto y = make_unique<int>(x); //another way to create a unique pointer. Creates a new unique pointer object using an exisiting one. This does not work because they are unique pointers and so the copy constructor is deleted
  cout << *y << endl; //error

  //shared pointer
  shared_ptr<int> z(new int); //creates a shared pointer object 

  auto h = make_shared<int>();//creates a unique pointer object 

  shared_ptr<int> j(h); // copy constructor

  z=h; //assignment operator

  UniquePointer ptr(new int);

}
