cmake_minimum_required (VERSION 2.8)

SET (SRC_LIST faster_rcnn.cpp)
include_directories ( "${PROJECT_SOURCE_DIR}/../../caffe-fast-rcnn/include"
    "${PROJECT_SOURCE_DIR}/../../lib/nms" 
    /usr/local/include 
    /usr/include/python2.7
    /usr/local/cuda/include )

add_library(faster_rcnn SHARED ${SRC_LIST})