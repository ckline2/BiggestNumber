//Author:Charlie Kline
#include<iostream>

int main()
{
  int age;
  int I;
  //declare variables here

  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>>
  std::cin>>age;
  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variable
  std::cin>>I;
  //determine if first or second is bigger and store that in a third variable


  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest number

  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
