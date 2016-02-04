/*
* planeObject.cpp
*/

#include "planeObject.h"

using namespace PEBIECCL;

// Constructor for planeObject
planeObject::planeObject()
{

}

// Destructor for planeObject
planeObject::~planeObject()
{

}

void planeObject::setAvgObjectColor(int AvgR, int AvgG, int AvgB)
{
	this->avgR = AvgR;
	this->avgG = AvgG;
	this->avgB = AvgB;
}

void planeObject::setObjectPoints(pcl::PointCloud<pcl::PointXYZRGB> &ObjPoints)
{
	this->objectPoints = ObjPoints;
}

void planeObject::setObjectEndPoints(std::vector<pcl::PointXYZ> ObjectEndPoints)
{
	this->objectEndPoints = ObjectEndPoints;
}

void planeObject::setCenter(pcl::PointXYZ Center)
{
	this->center = Center;
}

void planeObject::setWidth(float Width)
{
	this->width = Width;
}

void planeObject::setHeight(float Height)
{
	this->height = Height;
}

int planeObject::getAvgRed()
{
	return this->avgR;
}

int planeObject::getAvgGreen()
{
	return this->avgG;
}

int planeObject::getAvgBlue()
{
	return this->avgB;
}

pcl::PointCloud<pcl::PointXYZRGB> planeObject::getObjectPoints()
{
	return this->objectPoints;
}

std::vector<pcl::PointXYZ> planeObject::getObjectEndPoints()
{
	return this->objectEndPoints;
}

pcl::PointXYZ planeObject::getCenter()
{
	return this->center;
}

float planeObject::getWidth()
{
	return this->width;
}

float planeObject::getHeight()
{
	return this->height;
}
