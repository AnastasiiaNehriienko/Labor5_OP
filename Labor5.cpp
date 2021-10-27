#include <iostream>

int main()
{
	int a;
	long amount = 0;
	for (a = 1000000; a <= 1300000; a++) {
		int b = a;
		int answer = 0;
		while (b)
		{
			int temp = b % 10;
			answer = answer * 10 + temp;
			b /= 10;
		}
		if (a == answer) {
			amount++;
			std::cout << a << "; ";
		}
	}
	std::cout << "Amount: " << amount;
	return 0;
}