#include<iostream>
using namespace std;

class Shapes
{
	private:
		int length;
		int breadth;
		float radius;
		int arearec;
		float areacircle;
	
	public:
		void getinfo()
		{
			cout<<"Enter Length Of The Rectangle : ";
			cin>>length;
		
			
			cout<<"Enter Breadth Of The Rectangle : ";
			cin>>breadth;
	
			
			cout<<"Enter Radius Of The Circle : ";
			cin>>radius;

			
		}
		

		void calculate()
		{
			arearec = length*breadth;
			areacircle = 3.14*radius*radius;
		}
		
		void setinfo()
		{
			cout<<"Area Of Rectangle : "<<arearec<<endl;
			cout<<"Area Of Circle : "<<areacircle<<endl;
		
		}
		
};

int main()
{
	Shapes s;
	s.getinfo();
	s.calculate();
	s.setinfo();
	
	return 0;
}
