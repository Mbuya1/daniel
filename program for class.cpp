#include <iostream>
using namespace std;
class addition{
//data members
public:
int a,b,c;
//member function
int product(){
 return  (a*b*c);
}
};
//main function
int main() {
  //object creation
  addition addition1;
  int a=addition1.a=22;
  int b=addition1.b=30;
  int c=addition1.c=50;
  cout << "The product is "<<addition1.product();
  return 0;
}