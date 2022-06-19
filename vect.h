#include <iostream>
#include <string>
#include <cmath>

class vect
{
	private: 
		std::string vec;
		float x1;
		float y1;
		float x2;
		float y2;

	public:
		
		vect(const std::string& v, float a, float b, float c, float d)
		{
			vec = v;
			x1 = a;
			y1 = b;
			x2 = c;
			y2 = d;
			std::cout << "Coordinates: " << "(" << x1 << ";" << y1 << ") (" << x2 << ";" << y2 << ")" << std::endl;
		}
		
		
	vect()
	{
		vec = "None";
		x1 = 432124;	
		F=hhh
		x2 = 0;
		y2 = 0;	
	}

		
	~vect()
	{
		std::cout << "Deleted" << vec << std::endl;
	}
		
		
	ras()
	{
		float x0 = 0;
		float y0 = 0;
		x0 = sqrt(pow(x1,2) + pow(y1,2));
		y0 = sqrt(pow(x2,2) + pow(y2,2));
		std::cout << "Distance between O(0;0) and x1y1: "<< x0 << std::endl;
		std::cout << "Distance between O(0;0) and x2y2: "<< y0 << std::endl;
	}
		
	len()
	{
		float l = 0;
		l = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));
		std::cout << "Length " << vec << ": " << l << std::endl;
	}
};

