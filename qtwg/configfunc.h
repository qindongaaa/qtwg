#ifndef CONFIGFUNC_H
#define CONFIGFUNC_H

#include <QtCore/QTextStream>
#include <QtCore/QFile>
#include <QtCore/QIODevice>

using namespace std;
class configfunc
{
public:
    configfunc();
    void saveText(QString path);
    QString readText(QString path);
    QStringList getTaskName(char* path);
};

#endif // CONFIGFUNC_H
