#include <iostream>
#include <cstdlib>
#include <time.h>
#include <stdlib>
using namespace std;

int main(void)
{
	int i;

	srand(time(0));

	for (i = 0; i < 5)
		cout << rand() << " ";

	return (0);
}
