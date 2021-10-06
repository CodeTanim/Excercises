#include <iostream>
using std::cin;
using std::cout;

int xgcd(int a, int b, int& x, int& y)
{
	if (b == 0) {
		x = 1;
		y = 0;
		return a;
	}
	int xx,yy;
	int d = xgcd(b,a%b,xx,yy);
	// now d = xx*b + yy*r = xx*b + yy(a - q*b)
	x = yy;
	y = xx - yy*(a/b);
	return d;
}

int main()
{
	int a,b,x,y;
	while (cin >> a >> b) {
		int d = xgcd(a,b,x,y);
		printf("gcd(%i,%i) = %i = %i*%i + %i*%i\n",
				a,b,d,x,a,y,b);
	}
	return 0;
}

/* TODO: try to spend a little time looking back through old exercises
 * and see if there are any that you still have trouble with.  We can
 * go through these next class. */

// vim:foldlevel=2
