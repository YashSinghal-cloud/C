#include <iostream>
using namespace std;

int n_sum(int num)
{
    if (!(num))
        return 0;
    return num + n_sum(num - 1);
}

int main(){
  int num;
  cout << "Enter a value for finding summation :- ";
  cin >> num;
  cout << "Summation of " << num << " is " << n_sum(num) << endl;
  return 0;
}
