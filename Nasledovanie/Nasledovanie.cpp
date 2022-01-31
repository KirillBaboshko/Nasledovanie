#include<iostream>
using namespace std;
class Point
{
protected:
	int y;
	int x;
public:
	Point()
	{
		x = y = 0;
	}
	int& GetX()
	{
		return x;
	}
	int& GetY()
	{
		return y;
	}
};
class MyWindows : public Point
{
	int width;
	int heigth;
public:
	MyWindows(int W, int H)
	{
		width = W;
		heigth = H;
	}
	int& Getwidth()
	{
		return width;
	}
	int& Getheigth()
	{
		return heigth;
	}
	void MoveX(int DX)
	{
		x += DX;
	}
	void MoveY(int DY)
	{
		y += DY;
	}

	void Show()
	{
		cout << "-------------------------\n\n";
		cout << "X = " << x << "\n\n";
		cout << "Y = " << y << "\n\n";
		cout << " width = " << width << "\n\n";
		cout << "heigth = " << heigth << "\n\n";
		cout << "-------------------------\n\n";
	}
};

template <class T>
class Pair
{
	T a;
	T b;
public:
	Pair(T t1, T t2);
	
};
template <class T>
Pair<T>::Pair(T t1,T t2):a(t1),b(t2){}
template <class T>
class Trio :public Pair<T>
{
	T c;
public:
	Trio(T t1, T t2, T t3);
};
template <class T>
Trio<T>::Trio(T t1, T t2,T t3) :Pair<T>(t1,t2),c(t3) {}

int main()
{
	MyWindows A(10, 10);
	A.Show();
	A.GetX() = 5;
	A.GetY() = 3;
	A.Getwidth() = 40;
	A.Getheigth() = 50;
	A.Show();
	A.MoveX(2);
	A.MoveY(7);
	A.Show();

	return 0;
}