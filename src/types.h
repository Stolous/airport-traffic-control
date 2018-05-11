#ifndef TYPES_H
#define TYPES_H

typedef struct plane
{
	char id[7];
	int fuel;
	int comsumption;
	Company company;
}
Plane;

typedef struct airline
{
	Plane_L planes;
		
}
Airline;

#endif

