#include <iostream>
#include <sstream>
using namespace std;

int main () {
    float val;
  cin>> val;
  stringstream ss (stringstream::in | stringstream::out);

  ss << val;

  string test = ss.str();

  cout << test <<endl;

  return 0;
}
