// Rubiks Cube.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
class Rubiks {
private:
	int length;
	string shuffle[13] = { "R", "L", "U", "D", "B", "F","R'", "L'", "U'", "D'", "B'", "F'" };
public:
	Rubiks(int y) {
		length = y;
	}
	int getLength() {
		return length;
	}
	string getShuffle(int x) {
		return shuffle[x];
	}
	void doShuffle() {
		int checker = 0;
		for (int x = 1; x <= getLength(); x++) {
			int again = x;
			int random = rand() % 12;
			if (checker - random != 1 && checker - random != -1)
				cout << getShuffle(random) + " ";
			if (checker - random == 1 || checker - random == -1)
				x = again;
			checker = random;
		}
		cout << "\n";
	}
};
int main()
{
	Rubiks test = Rubiks(5);
	test.doShuffle();
	
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
