#include <iostream>
#include <fstream>

using namespace std;

class Point
{
private:
	double m_x, m_y, m_z;

public:
	Point(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{}

	double getX() { return m_x; }
	double getY() { return m_y; }
	double getZ() { return m_z; }

	//void print()
	//{
	//	cout << m_x << " " << m_y << " " << m_z << endl;
	//}

	friend std::ostream& operator << (std::ostream &out, const Point& point)
	{
		out <<"(" <<  point.m_x << " " << point.m_y << " " << point.m_z << ")";

		return out;
	}

	friend std::istream& operator >> (std::istream& in, Point& point)
	{
		in >> point.m_x >> point.m_y >> point.m_z;
		//out << "(" << point.m_x << " " << point.m_y << " " << point.m_z << ")";

		return in;
	}


};

int main()
{
	ofstream of("out.csv");

	//Point p1(0.0, 0.3, 0.5), p2(3.0, 4.0, 5.0);

	Point p1, p2;

	cin >> p1 >> p2;

	//p1.print();
	//p2.print();

	cout << p1 << " " << p2 << endl;
	of << p1 << " " << p2 << endl;

	of.close();





	return 0;

}