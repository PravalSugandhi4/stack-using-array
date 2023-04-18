#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;

int a[10],t=-1,no,ch;
void push()
{
  if(t>=10)
  {
cout<<"\n                                                             given stack is full ";
  }
  else
  { 
    cout<<"\n                                                        enter the no...";
    cin>>no;
    t++;
    a[t]=no;
                                                  
  }
}
void pop()
{
  if(t==-1)
  {
    cout<<"\n                                                      stack is empty";
  }
  else
  {
    cout<<"                                                      delited element is ..."<<a[t];
    t--;
  }
}
void print()
{ 
  if (t==-1)
  {
    cout<<"\n                                                    stack is empty";
  }
  else
  {
  cout<<"\n                                                   elements in a stack are";
  for(int i=0;i<=t;i++)
  {
    cout<<"\t"<<a[i];
  }
  }
}

int main()
{
  //stack using array 
 do
 {
   Beep(900,100);
  cout<<"\n********************main menu**************************\n";
   cout<<"\nenter 1 for{push}";
   cout<<"\nenter 2 for{pop}"; 
   cout<<"\nenter 3 for{print}"; 
   cout<<"\nenter 4 for{exit}";
cout<<"\n                     ------enter your choice--------->>";
cin>>ch;
switch(ch)
{
case 1:
push();
break;
case 2:
pop();
break;
case 3:
print();
break;
case 4:
break;
break;
default:
cout<<"\nwrong input";
}
}while(ch!=4);







}
