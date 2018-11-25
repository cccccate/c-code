/*******************
* 文件名：if_example
* 作者：lcccate
* 时间：18.11.21
* 描述：统计在输入中每个值连续出现了多少次（注意是连续出现）
* 思路：定义三个变量，currval：正在统计的数，val：读入的新值，cnt：计数器
        输入的
*******************/
#include <iostream>
using namespace std;
int main()
{
    int currval = 0, val = 0;  //currval:正在统计的数；val：读入的新值
    if (cin>>currval)
    {
        int cnt = 1;          //计数器
        while (cin>>val)
        {
            if (val == currval)//如果读入的新值与正在统计的数一样，那么计数一次
                ++cnt;
            else {             //否则打印
                cout<<currval<<" occurs "<<cnt<<" times "<<endl;
                currval = val; //并将新值赋给currval
                cnt = 1;       //计数器重置
            }
        }
        //打印最后一个值的个数
        cout<<currval<<" occurs "<<cnt<<" times "<<endl;
    }
    return 0;
}
