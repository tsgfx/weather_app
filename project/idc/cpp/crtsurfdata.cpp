// 本程序用于生成气象站点观测的分钟数据
#include "_public.h"
using namespace idc;
int main(int argc, char *argv[])
{
    // 站点参数文件  生成的测试数据存放的目录 本程序运行的日志
    if (argc != 4)
    {
        // 如果参数非法，给出帮助文档。
        cout << "Using:./crtsurfdata inifile outpath logfile datafmt\n";
        cout << "Examples:/project/tools/bin/procctl 60 /project/idc/bin/crtsurfdata /project/idc/ini/stcode.ini /tmp/idc/surfdata /log/idc/crtsurfdata.log csv,xml,json\n\n";

        cout << "本程序用于生成气象站点观测的分钟数据，程序每分钟运行一次，由调度模块启动。\n";
        cout << "inifile  气象站点参数文件名。\n";
        cout << "outpath  气象站点数据文件存放的目录。\n";
        cout << "logfile  本程序运行的日志文件名。\n";
        cout << "datafmt  输出数据文件的格式，支持csv、xml和json，中间用逗号分隔。\n\n";

        return -1;
    }
    return 0;
}