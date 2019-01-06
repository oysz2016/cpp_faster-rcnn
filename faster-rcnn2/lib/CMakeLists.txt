cmake_minimum_required (VERSION 3.5.1)

SET (SRC_LIST frcnn_api.cpp)
include_directories ( /home/xxx/faster-rcnn2/include
    /usr/local/include 
    /usr/include/python2.7
    /home/ouyangshizhuang/local/cuda-9.1/include )

add_library(frcnn_api SHARED ${SRC_LIST})
