#include<iostream>
using namespace std;
char* weird_string() {
 char c[7] = �123345�;
 return c;
}
int main()
{
	cout<<weird_string();
	return 0;
}
