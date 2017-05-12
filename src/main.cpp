#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

//    QString path;
//    path="/dev";
//    QDir *dir=new QDir(path);
//    QStringList filter;
//    QList<QFileInfo> *fileInfo=new QList<QFileInfo>(dir->entryInfoList(filter));
//    //real all the file in the dir
//    std::string fileName= "/dev/";
//    for(int i=0;i<fileInfo->count();i++){
//        QString name=fileInfo->at(i).fileName();
//        if(!(name.contains("pcan3"))){
//            //qDebug()<<"can't find the ini path"<<name;

//            continue;
//        }else {
//            fileName +=name.toStdString();
//            //            std::cout << fileName  << endl;
//            //QDebug<<fileName;
//            return fileName;
//            break;
//        }
//    }
//    delete dir;
//    delete fileInfo;
//    return fileName;

    return a.exec();
}
