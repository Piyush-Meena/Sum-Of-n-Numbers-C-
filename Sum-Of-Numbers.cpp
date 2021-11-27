#include <iostream.h>
#include <conio.h>
class SUB
{
 int n, sub;
public:
 void getdata()
 {
  cout << "Enter a positive integer: ";
     cin >> n;
 }
 void display()
 {
  sub=0;
  for (int i = 1; i <= n; ++i)
  {
         sub -= i;
     }
     cout << "Subtraction = " << sub;
 }
};
void main()
{
 clrscr();
 SUB s1;
 s1.getdata();
 s1.display();
 getch();
}
