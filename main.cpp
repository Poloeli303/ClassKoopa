#include <iostream>
using namespace std;

class Koopa {
private:
	int xpos;
	int ypos;
	char dir;
	char dir2;
public:
	Koopa(int x, int y);
	void walk();
	void print();
};


int main() {


	Koopa g1(400, 400);

	while (1) {
		g1.walk();
		g1.print();
		system("pause");
	}

}

Koopa::Koopa(int x, int y) {
	xpos = x;
	ypos = y;
	dir = 'l';
	dir2 = 'u';

}

void Koopa::walk()
{
	if (xpos <= 0)
	dir = 'r';
	if (xpos >= 800)
	dir = 'l';
	if (dir == 'r')
	xpos += 10;
	if (dir == 'l')
	xpos -= 10;

	if (ypos <= 0)
		dir2 = 'u';
	if (ypos >= 400)
		dir2 = 'd';
	if (dir2 == 'u')
		ypos += 10;
	if (dir2 == 'd')
		ypos -= 10;
}

void Koopa::print()
{
	cout << "Im a koopa and im at " << xpos << ", " << ypos << " Im also moving "<<dir<<" and "<<dir2<< endl;
}
