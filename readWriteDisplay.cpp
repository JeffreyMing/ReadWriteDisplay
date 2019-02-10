#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <iostream>
#include <string>

using namespace cv;
using namespace std;

int main(void)
{
	Mat image;

	String imageName("../../data/images/sample.jpg");

	image = imread(imageName, IMREAD_COLOR);

	if (image.empty()) {
		cout << "Could not open or find the image" << endl;
	}

	Mat Grayimage;

	//轉成灰階
	cvtColor(image, Grayimage, CV_BGR2GRAY);

	//show出圖片
	imshow("image", image);
	imshow("Grayimage", Grayimage);

	//儲存圖片
	imwrite("GrayImage.jpg", Grayimage);

	waitKey(0);
	return 0;

}
