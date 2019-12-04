#include <iostream>
#include <string>
#include <algorithm>
#include <boost>

using namespace std;

void some_func() {
  string s = "example string";
  replace( s.begin(), s.end(), 'x', 'y'); // replace all 'x' to 'y'
}

int main() {
	string in_place = "sdfafsd3523%#@$";
	cin>>in_place;
    boost::replace_all(in_place, "#", "@");
	return 0;
}
