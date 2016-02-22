#include<iostream>
using namespace std;
class Cube
	{
		public:
			Cube(int h,int l,int w);
			void ShowVolume();
		private:
			int height,length,width;
	};
Cube::Cube(int h,int l,int w)
{
	height=h;	length=l;	width=w;
}
void Cube::ShowVolume()
{
	cout<<height*length*width<<endl;
}
int main()
{
	int h,l,w;
	cin>>h>>l>>w;
	Cube c1(h,l,w);
	cin>>h>>l>>w;
	Cube c2(h,l,w);
	c1.ShowVolume();
	c2.ShowVolume();
}

