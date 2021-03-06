/*
 * plane_segmentation.h
 *
 * Header file for the object class planeSegmentor
 */

#pragma once

#include <iostream>
#include <pcl/ModelCoefficients.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/sample_consensus/method_types.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <pcl/exceptions.h>

namespace PEBIECCL
{
	class planeSegmentor
	{
		public:

			// Constructors for the planeSegmentor
			planeSegmentor(pcl::PointCloud<pcl::PointXYZRGB>::Ptr cloud);

			// Destructor for planeSegmentor
			~planeSegmentor();

			pcl::ModelCoefficients::Ptr MC;
			pcl::PointIndices::Ptr PI;

		private:

	};
}