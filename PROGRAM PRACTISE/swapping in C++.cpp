#include<iostream>
#include<stdio.h>
using namespace std;
class item
{
      int number;
      float cost;
      public:
             void getdata(int a,float b);
             void putdata(void);

};  
void item::getdata(int a,float b)
{
      number=a;
      cost=b;
}
void item::putdata(void)
{
     std::cout<<"number="<<number<<"\n";
     std::cout<<"cost="<<cost<<"\n";
}  
                        
main()
{
      item x;
      x.getdata(100,299.99);
      x.putdata();
}
