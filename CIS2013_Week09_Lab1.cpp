#include <iostream>
#include <string>
using namespace std;

int main(){
string test = "Sonny";

cout << test << endl;
test = "Icks";
cout << test << endl;
cout << " The length of test is: " << test.length() << endl;
cout << " The 3rd char is: " << test[2] << endl;

for (int i=0; i<test.length(); i++){
	cout << " You spell Sonny with a " << test[i] << endl;
	
	cin >> test;
	cout << "Test is now equal to " << test << endl;
}

	
	return 0;
}