/*Tyler Allen
CS111
Program 1
2-24-15

This program will output the largest number out of four numbers*/

#include <iostream>
using namespace std;

int main(){//main function
  int n1;//declare variables
  int n2;
  int n3;
  int n4;
  int largest;

  cout<<"Enter the first number: ";//ask for age input
  cin>> n1;//assign input to age
  cout<<"Enter the second number: ";
  cin>>n2;
  cout<<"Enter the third number: ";
  cin>>n3;
  cout<<"Enter the fourth number: ";
  cin>>n4;

  if(n1>n2)
    largest=n1;
  else
    largest = n2;
  if(n3>largest)
    largest=n3;
  if(n4>largest)
    largest=n4;

  cout<<"The largest value is "<<largest<<endl;
    return 0;
}
