#include "configfunc.h"
#include <io.h>
#include <string>
#include <vector>
#include <iostream>
#include "QMessageBox"
#include "QString"
#include "QDir"
#include "QDebug"
#include "QTextCodec"

configfunc::configfunc()
{

}
void configfunc::saveText(QString path)//保存text
{
   QString proPath =  QDir::currentPath();
   QString sFilePath=proPath+"\\test1.txt";
   QFile file(sFilePath);
   if(!file.open(QIODevice::WriteOnly|QIODevice::Text))
   {
        QMessageBox::warning(NULL,"提示","无法创建文件");
        return;
    }
   else
      {
          QTextStream stream(&file);
          stream.seek(file.size());
          stream <<path << "\n";
          file.close();
      }
}
QString configfunc::readText(QString path)//读取text
{
    QString displayString;
    QTextCodec *codec = QTextCodec::codecForName("GBK");
    if (path.isEmpty())     //如果未选择文件便确认，即返回
            return NULL;
        QFile file(path);
        if (file.open(QIODevice::ReadOnly | QIODevice::Text))
        {
            while (!file.atEnd())
            {
                QByteArray line = file.readLine();
                QString str(codec->toUnicode(line));
                qDebug()<< str;
                displayString.append(str);
            }
          }
            file.close();
            return displayString;
}



QStringList configfunc::getTaskName( char *path)
{
    //存储文件名称
    QStringList string_list;
    //判断路径是否存在
      QDir dir(path);
      if(!dir.exists())
          return string_list;
      QStringList filters;
      filters<<QString("*.txt");
      dir.setFilter(QDir::Files | QDir::NoSymLinks); //设置类型过滤器，只为文件格式
      dir.setNameFilters(filters);  //设置文件名称过滤器，只为filters格式
      int dir_count = dir.count();
      if(dir_count <= 0)
          return string_list;
      for(int i=0; i<dir_count; i++)
      {
          QString file_name = dir[i];
          file_name = file_name.mid(0,file_name.length()-4);//文件名称
          //ts<<file_name<<"\r\n"<<"\r\n";
          string_list.append(file_name);
      }
      return string_list;
}
