#include <opencv2/highgui.hpp>
#include <Windows.h>
#include <iostream>

using namespace std;
using namespace cv;

int main() {
	Mat image;
	VideoCapture camera;
	camera.set(CAP_PROP_FRAME_WIDTH, 640);
	camera.set(CAP_PROP_FRAME_WIDTH, 480);
	camera.open(0);
	char c;

	if (!camera.isOpened()){
		cout << "Your camera is off";
		return -1;
	}

	while (1) {
		camera >> image;
		namedWindow("Camera", 1);

		imshow("Camera", image);

		c = (char)waitKey(1);
		if (c == 27) break;
	}
	return 0;
}