//
// Utilities for camera usage
// 
#pragma once
// Personal libs
#include "realsense.h"
// Librealsense
#include <librealsense2/rs.hpp>
#include <librealsense2/rsutil.h>
//OpenNI
#include <OpenNI.h>
// PCL
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <pcl/visualization/pcl_visualizer.h>
class viewer_utils : public realsense
{
public:
// 
// Generates a PCL point cloud from the depth and color image of a depth camera
// 
 
pcl::PointCloud<pcl::PointXYZRGB> realsense_get_point_cloud(const std::vector<uint16_t>& depth_data_aligned,const std::vector<uint8_t>& color_data,
                                                       const rs2_intrinsics& color_K,const rs2_intrinsics& depth_K,const float depth_scale);
// 
// Generates a PCL point cloud from the depth and color image of a realsense camera
// 
// @param dev Realsense device wrapper
// @return Point cloud based on the realsense camera information
// 
pcl::PointCloud<pcl::PointXYZRGB> realsense_get_point_cloud(const realsense& dev);
//Renser point cloud
/*
std::shared_ptr<pcl::visualization::PCLVisualizer>
visualize_rgb_pc(const pcl::PointCloud<pcl::PointXYZRGB>::Ptr& point_cloud);
void loop_viewer(const std::shared_ptr<pcl::visualization::PCLVisualizer>& viewer);
*/
};
