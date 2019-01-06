#This part is used for compile faster_rcnn_demo.cpp
cmake_minimum_required (VERSION 2.8)

project (main_demo)

add_executable(main main.cpp)

include_directories ( "${PROJECT_SOURCE_DIR}/../caffe-fast-rcnn/include"
    "${PROJECT_SOURCE_DIR}/../lib/nms" 
    "${PROJECT_SOURCE_DIR}/lib" 
    /usr/local/include 
    /usr/include/python2.7
    /usr/local/cuda/include)

target_link_libraries(main /home/xxx/faster-rcnn1/lib/libfaster_rcnn.so
    /home/xxx/py-faster-rcnn/caffe-fast-rcnn/build/lib/libcaffe.so
    /home/xxx/py-faster-rcnn/lib/nms/libgpu_nms.so
    /usr/local/lib/libopencv_highgui.so 
    /usr/local/lib/libopencv_core.so 
    /usr/local/lib/libopencv_imgproc.so 
    /usr/local/lib/libopencv_imgcodecs.so
    /usr/lib/x86_64-linux-gnu/libglog.so
    /usr/lib/x86_64-linux-gnu/libboost_system.so
    /usr/lib/x86_64-linux-gnu/libboost_python.so
    /usr/lib/x86_64-linux-gnu/libglog.so
    /usr/lib/x86_64-linux-gnu/libpython2.7.so
    )