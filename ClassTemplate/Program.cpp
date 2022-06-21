#include<iostream>
using namespace std;
template <typename T> class Point {
private:
	T x;
	T y;
public:
	Point()
	{
		x = y = 0;
	}
	Point(T x, T y)
	{
		this->x = x; 
		this->y = y;
	}
	void Show()
	{
		cout << "x=" << x << "\ty=" << y << "\n";
	}
};
int main()
{
	Point<double> p(2.8, 4);
	p.Show();
	return 0;
}