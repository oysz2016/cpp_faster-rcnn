#include "lib/frcnn_api.hpp" 
#include <iostream>
 
using namespace std;  
using namespace cv;  
using namespace caffe::Frcnn;  
int main(){    
    Mat frame = imread("test.jpg");
    caffe::Caffe::SetDevice(3);    
    caffe::Caffe::set_mode(caffe::Caffe::GPU);


    FRCNN_API::Detector detect("test.prototxt", "fpn_iter_120000.caffemodel", "default_config.json", true, true);

    clock_t startTime, endTime;
    vector<BBox<float> > boxes = detect.predict(frame);    // forward, detect results saved here


    for (int i = 0; i < boxes.size(); i++)   //draw rects  
         rectangle(frame, cv::Point(boxes[i][0], boxes[i][1]), cv::Point(boxes[i][2], boxes[i][3]), Scalar(0, 0, 255));
    imwrite("dete.jpg", frame);
}
