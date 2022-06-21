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
	T operator-(const Point &p)
	{
		T vidstan = sqrt(pow(p.x-x, 2.0) + pow(p.y - y, 2));
		return vidstan;
	}
};
int main()
{
	Point<double> p(2.8, 4);
	p.Show();
	Point<double> c(-2.3, 4);
	double t = p - c;
	cout << t << "\n";
	return 0;
}