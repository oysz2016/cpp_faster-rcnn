#include "faster_rcnn.hpp"
int main()
{
    string model_file = "";	//对应模型测试用的prototxt文件
    string weights_file = ""; //对应模型路径
    int GPUID=2;
    Caffe::SetDevice(GPUID);
    Caffe::set_mode(Caffe::CPU);
    Detector det = Detector(model_file, weights_file);
    det.Detect(""); //需要测试的图片
    return 0;
}
