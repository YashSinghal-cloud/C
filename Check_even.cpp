#include <iostream>
using namespace std;

int even_odd(int a){
    if (a%2==0){
    return 1;
    }
    else{
    return 0;
    }
}

int main()
{
  int num;
  cout << "Enter a value for checking :- ";
  cin >> num;
  if(even_odd(num)){
    cout << "Given no. is even" << endl;
  }
  else{
    cout << "Given no. is odd" << endl;
  }
  return 0;
}
