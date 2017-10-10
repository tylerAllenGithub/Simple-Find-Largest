/*Tyler Allen
CS111
3-12-15
LargestFunc.C
This program will read 3 numbers from the user and tell the largest number*/
#include <iostream>
using namespace std;
void showProgInfo();
int getNum();
int findLargest(int n1, int n2, int n3);
void printResult(int num1, int num2,int num3, int largest);

int main(){
  int num1;
  int num2;
  int num3;
  int largest;
  showProgInfo();
  num1= getNum();
  num2=getNum();
  num3=getNum();
largest= findLargest(num1, num2, num3);
 printResult(num1, num2,num3, largest);
  return 0;
}

void showProgInfo()
{
  cout<<"******************************************************************"<<endl;
  cout<<"This program will ask you to enter 3 numbers and find the largest."<<endl;
  cout<<"******************************************************************"<<endl;
}

int getNum()
{
  int num;
  cout<<"Enter a number: ";
  cin>>num;
  return num;
}

int findLargest(int n1, int n2, int n3)
{
  int largest=n1;

  if(n2>largest)
    largest=n2;
  else if(n3>largest)
    largest=n3;

  return largest;
}
void printResult(int num1, int num2,int num3, int largest)
{
  cout<<num1<<", "<<num2<<", "<<num3<<": Largest is "<<largest<<endl;
}
