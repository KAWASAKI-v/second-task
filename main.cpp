#include "sum.h"
#include <iostream>

using namespace std;

int main(){

  float z;
  float x;
  cout << "2 num separate by enter" << endl;
  cin >> z;
  cin >> x;
  cout << "Sum = " << sum(z, x) << endl;
  return 0;
}
