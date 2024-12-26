#include <iostream>
using namespace std;

int factorial(int num)
{
    if (!(num)){
        return 1;
        }
    return num * factorial(num - 1);
}

int main(){
  int num;
  cout << "Enter a value for finding factorial :- ";
  cin >> num;
  cout << "Factorial of " << num << " is " << factorial(num) << endl;
  return 0;
}
