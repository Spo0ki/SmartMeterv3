#include<iostream>
#include"cost.h"
using namespace std;

double getbill(double units, double x)
{
	units = units *60/x *60* 24 * 30;


		if (units <= 50)
		{
			return units * 0.58 + 1;
		}
		if (units > 50 && units <= 100)
		{
			return units * 0.68 + 2;
		}
		if (units > 100 && units <= 650)
		{
			if (units < 200)
				return units * 0.83 + 6;
			if (units > 201 && units <= 350)
				return units * 1.25 + 11;
			if (units > 350 && units <= 650)
				return units * 1.4 + 15;
		}
		if (units > 650)
		{
			if (units < 1000)
				return units * 1.5+ 25;
		}
		if (units > 1000)
			return units * 1.65 + 40;
	}