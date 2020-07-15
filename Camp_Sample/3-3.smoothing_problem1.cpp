// g++ $(pkg-config --cflags --libs opencv) -std=c++11 s_g_n.cpp -o s_g_n
#include "opencv2/opencv.hpp"
#include <iostream> 

using namespace cv;
using namespace std;

int main() {
Mat img = imread("./images/Fig05_gaussian.tif", 0);
Mat blurred, dst;
if (img.empty())
return 0;
imshow("Output", img);
int i = 17;
blur(img, blurred, Size(i, i));
imshow("blur", blurred);
medianBlur(img, blurred, i);
imshow("median", blurred);
bilateralFilter(img, blurred, i, i * 2, i / 2);
imshow("bilateral", blurred);
waitKey(0);
}
