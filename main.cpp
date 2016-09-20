#include "mainwindow.h"
#include <QApplication>
#include <opencv2/opencv.hpp>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();

    cv::Mat image= cv::imread(cv::String("pic.jpg"));
    cv::namedWindow("Tulips");
    cv::imshow("Tulips", image);
    cv::waitKey(1000);

    return a.exec();
}
