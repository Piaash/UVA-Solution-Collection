#include<iostream>
using namespace std;
class set
{
      int m,n;
      public:
             void input(void);
             void display(void);
             void add(void);
};
void set::input(void)
{
     cin>>m>>n;
}
void set::display(void)
{
     cout<<m<<n;
}
void set::add(void)
{
     cout<< m+n;
}
main()
{
      set A;
      A.input();
      A.display();
      A.add();
      return 0;
}
