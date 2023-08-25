#include<iostream>
using namespace std;

class max  
{
    private:
        int x, y;
    public:

   void input() 
   {
       cout << "Enter two numbers:";
       cin >> x>>y;
   }

   friend void find(max no);
};

void find(max no) 
{
   if (no.x > no.y) 
   {
       cout << "maximum is x:" << no.x;
   } 
   else 
   {
       cout << "maximum is y:" << no.y;
   }
}

int main() 
{

   max no;
   no.input();
   find(no);

   return 0;
}   


