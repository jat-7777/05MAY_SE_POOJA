#include <iostream>
using namespace std;
class line
{
public:
    inline float mul(int x, int y) 
    {
         return  x*y;
    }
    inline float cube(int x) 
    {
         return  x*x*x;
    }
};

int main()
{
    line obj;
    int x,y;
    cout<<"Enter two values:";
    cin>>x>>y;
    cout<<"\nMultiplication of two number is: "<<obj.mul(x,y);
    cout<<"\nCube of number is: "<<obj.cube(x)<<"\t"<<obj.cube(y);

    return 0;
}