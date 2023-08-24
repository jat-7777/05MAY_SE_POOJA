
#include<iostream>
using namespace std;
class calculator
{
  public:
  int add(int a, int b){ return a + b; }
  int sub(int a, int b){ return a - b; }
  int mul(int a, int b){ return a * b; }
  float div(int a, int b){ return a / b; }
  
  };



int main()
{
  calculator cal;
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    cout << "Sum: " << cal.add(num1, num2) << endl;
    cout << "Difference: " << cal.sub(num1, num2) << endl;
    cout << "Product: " << cal.mul(num1, num2) << endl;
    cout << "Quotient: " << cal.div(num1, num2) << endl;

  return 0; 
}
  
  
