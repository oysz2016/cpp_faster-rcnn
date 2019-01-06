#This part is used for compile faster_rcnn_demo.cpp
cmake_minimum_required (VERSION 2.8)

project (main_demo)

add_executable(main main.cpp)

include_directories ( "${PROJECT_SOURCE_DIR}/./include"
    /usr/local/include 
    /usr/include/python2.7
    /usr/local/cuda-9.1/include)

target_link_libraries(main /home/xxx/faster-rcnn2/lib/libfrcnn_api.so
    /home/xxxx/faster-rcnn2/libcaffe.so 
    /usr/local/cuda-9.1/lib64/libcudart.so
    /usr/local/lib/libopencv_highgui.so 
    /usr/local/lib/libopencv_core.so 
    /usr/local/lib/libopencv_imgproc.so 
    /usr/local/lib/libopencv_imgcodecs.so
    /usr/lib/x86_64-linux-gnu/libglog.so
    /usr/lib/x86_64-linux-gnu/libboost_system.so
    /usr/lib/x86_64-linux-gnu/libboost_python.so
    /usr/lib/x86_64-linux-gnu/libpython2.7.so
    /usr/lib/x86_64-linux-gnu/libprotobuf.so
    )
