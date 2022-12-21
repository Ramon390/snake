/* 贪吃蛇游戏 贡献者：Ramon、 */
#include <iostream>
#include <time.h>
using namespace std;
int dollarX, dollarY, maxMapSize = 12;//地图最大边缘
int main()
{
    srand(time(0));//产生随机种子
    dollarX = rand() % (maxMapSize - 2) + 2;//随机坐标x
    dollarY = rand() % (maxMapSize - 2) + 2;//随机坐标y
    cout << "dollar: "<< dollarX << "," << dollarY << endl;
    //输出
    for (int i = 1; i <= maxMapSize; ++i) {
        for (int j = 1; j <= maxMapSize; ++j) {
            if (i == 1 || i == maxMapSize || j==1 || j==maxMapSize)
                cout << "*";//输出边界
            else if (dollarX == i && dollarY == j) {
                cout << "$";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}
