/**
* planeObject.h
*/

#pragma once

#include <vector>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>

namespace PEBIECCL
{
	class planeObject
	{
		public:

			// Constructor for planeInfo
			planeObject();

			// Destructor for planeInfo
			~planeObject();

			// Functions for saving data
			void setAvgObjectColor(int AvgR, int AvgG, int AvgB);
			void setObjectPoints(pcl::PointCloud<pcl::PointXYZRGB> &ObjPoints);
			void setObjectEndPoints(std::vector<pcl::PointXYZ> ObjectEndPoints);
			void setCenter(pcl::PointXYZ Center);
			void setWidth(float Width);
			void setHeight(float Height);

			// Functions for retrieving data
			int getAvgRed();
			int getAvgGreen();
			int getAvgBlue();
			pcl::PointCloud<pcl::PointXYZRGB> getObjectPoints();
			std::vector<pcl::PointXYZ> getObjectEndPoints();
			pcl::PointXYZ getCenter();
			float getWidth();
			float getHeight();

		private:
			pcl::PointCloud<pcl::PointXYZRGB> objectPoints;
			int avgR;
			int avgG;
			int avgB;
			std::vector<pcl::PointXYZ> objectEndPoints;
			pcl::PointXYZ center;
			float width;
			float height;

	};
}