#include <iostream>
#include "opencv.hpp"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

using namespace cv;
using namespace std;

int main(int argc, const char* argv[]) {

	string link = "./images/lena.png";
	Mat img = imread(link, IMREAD_COLOR);

	//resize(img, img, Size(200, 200));
	//imshow("org", img);

	Mat roi(img, Rect(0, 0, 300, 300));
	Mat roi2(img, Rect(100, 0, 400, 400));

	imshow("roi", roi);
	imshow("roi2", roi2);
	imshow("img", img);
	waitKey(0);
	return 0;
}
