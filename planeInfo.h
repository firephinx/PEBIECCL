/**
* planeInfo.h
*/

#pragma once

#include <vector>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

#include "planeObject.h"

namespace PEBIECCL
{
	class planeInfo
	{
		public:

			// Constructor for planeInfo
			planeInfo();

			// Destructor for planeInfo
			~planeInfo();

			// Functions for saving data
			void setAvgPlaneColor(int AvgR, int AvgG, int AvgB);
			void setPlanePoints(pcl::PointCloud<pcl::PointXYZRGB> &Points);
			void addPlaneObjects(planeObject &Object);
			void setCenter(pcl::PointXYZ Center);

			// Functions for retrieving data
			int getAvgRed();
			int getAvgGreen();
			int getAvgBlue();
			pcl::PointCloud<pcl::PointXYZRGB> getPlanePoints();
			std::vector<planeObject> getPlaneObjects();
			pcl::PointXYZ getCenter();

		private:
			pcl::PointCloud<pcl::PointXYZRGB> planePoints;
			int avgR;
			int avgG;
			int avgB;
			std::vector<planeObject> planeObjects;
			pcl::PointXYZ center;

	};
}