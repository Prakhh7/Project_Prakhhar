# include <iostream>
using namespace std;
int main()
{
cout<<"Press 1 for Stack and Queues\n"<<"Press 2 to draw a circle\n"<<"Press 3 to draw a rectangle";
int choice;
cin>>choice;
switch(choice)
{
case 1:
break ;

case 2:
circle();
break ;

case 3:
rectangle();
break ;
}
return 0;
}
