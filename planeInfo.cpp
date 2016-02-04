/*
 * planeInfo.cpp
 * 
 * Simple Object that stores each plane's characteristics
 */

#include "planeInfo.h"

using namespace PEBIECCL;

// Constructor for planeInfo
planeInfo::planeInfo()
{

}

// Destructor for planeInfo
planeInfo::~planeInfo()
{

}

void planeInfo::setAvgPlaneColor(int AvgR, int AvgG, int AvgB)
{
	this->avgR = AvgR;
	this->avgG = AvgG;
	this->avgB = AvgB;
}

void planeInfo::setPlanePoints(pcl::PointCloud<pcl::PointXYZRGB> &Points)
{
	this->planePoints = Points;
}

void planeInfo::addPlaneObjects(planeObject &Object)
{
	this->planeObjects.push_back(Object);
}

void planeInfo::setCenter(pcl::PointXYZ Center)
{
	this->center = Center;
}

int planeInfo::getAvgRed()
{
	return this->avgR;
}

int planeInfo::getAvgGreen()
{
	return this->avgG;
}

int planeInfo::getAvgBlue()
{
	return this->avgB;
}

pcl::PointCloud<pcl::PointXYZRGB> planeInfo::getPlanePoints()
{
	return this->planePoints;
}

std::vector<planeObject> planeInfo::getPlaneObjects()
{
	return this->planeObjects;
}

pcl::PointXYZ planeInfo::getCenter()
{
	return this->center;
}

