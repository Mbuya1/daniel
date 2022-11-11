

	// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int cylinder1;
//creating class cylinder
class cylinder{
    public:
    int radius,height;
    float pi=3.1427;
    float sa;
    float volume(){
        return (pi*radius*radius*height);
    }
    float surface_area(){
        sa= ((2*pi*radius*radius)+(2*pi*radius*height));
        return sa;
    }
};
int main() {
   cylinder cylinder1;
  int  a=cylinder1.radius=4;
   int  b=cylinder1.height=10;
  float  vol=cylinder1.volume();
    float area=cylinder1.surface_area();
    cout << "Volume is "<<vol<<endl;
    cout<< "Surface area is "<<area<<endl;

    return 0;
}
