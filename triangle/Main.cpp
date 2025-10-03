#include <iostream>
#include "triangle.h"

using namespace std;

int main() {
	triangle k;
	k.Init(3,4);
	k.Read();
	k.hypotenuse();
	k.Display();
	system("pause");
}