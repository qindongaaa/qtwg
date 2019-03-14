#include "analyshell.h"
#include "configfunc.h"
#include <iostream>
#include <iomanip>

using namespace std;
typedef std::uint64_t hash_t;

constexpr hash_t prime = 0x100000001B3ull;
constexpr hash_t basis = 0xCBF29CE484222325ull;

configfunc *config = new configfunc;
analyshell::analyshell()
{

}
hash_t hash_(char const* str)
{
    hash_t ret{basis};

    while(*str){
        ret ^= *str;
        ret *= prime;
        str++;
    }

    return ret;
}
constexpr hash_t hash_compile_time(char const* str, hash_t last_value = basis)
{
    return *str ? hash_compile_time(str+1, (*str ^ last_value) * prime) : last_value;
}
constexpr unsigned long long operator "" _hash(char const* p, size_t)
{
    return hash_compile_time(p);
}
void analyshell::analyTask(QString name,char*taskpath){
//    const char* task = "任务名";
//    switch (hash_(task)) {
//    case "任务一"_hash:
//        cout << "1st one" << endl;
//        break;
//    case "任务二"_hash:
//        cout << "2nd one" << endl;
//        break;
//    case "任务三"_hash:
//        cout << "3rd one" << endl;
//        break;
//    default:
//        cout << "Default..." << endl;

//    }
    QString txt = config->readText(taskpath+name+".txt");
    QStringList list = txt.split(";");
    for (QString single:list) {
        if(single.contains("移动")){
            //GO
            continue;
        }
        if(single.contains("过门")){
            //CROSS
            continue;
        }
        if(single.contains("使用")){
            //USE
            continue;
        }
        if(single.contains("购买")){
            //BUY
            continue;
        }
}
}
