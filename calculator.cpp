  
#include <bits/stdc++.h>
using namespace std;

int add(int num1, int num2) {
  return num1 + num2;
}
int modulo(int n1,int n2){
  return n1%n2;
}
int main() {
  
  int num1, num2;
  
  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter second number: ";
  cin >> num2;
  
  cout << "Addition of first number and second number is: " << add(num1, num2);
  
  return 0;
}
