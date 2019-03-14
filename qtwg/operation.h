#ifndef OPERATION_H
#define OPERATION_H


class operation
{
public:
    operation();
    void GO(int x,int y);
    void USE(char *thingName);
    void CROSS(int x,int y);
    void BUY(char *thingName,int num);
};

#endif // OPERATION_H
