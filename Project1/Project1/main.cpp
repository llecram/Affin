#include<iostream>
#include"Header.h"
using namespace std;
int main() {
	int a1 = 781;
	int c2 = 913;
	int d = euclides(a1, c2);
	int s = 0;
	int t = 0;
	int g = euclidesext(84, 320, s, t);
	cout << s << endl << t << endl << g<<endl;
	cout << d << endl;
	system("pause");
}