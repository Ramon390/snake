/* 贪吃蛇游戏 */
#include <iostream>
using namespace std;
int dollarX, dollarY;
int main()
{
    srand(time(0));//产生随机种子
    dollarX = rand() % 10 + 2;//范围为：2~11
    dollarY = rand() % 10 + 2;
    cout << "dollar: "<< dollarX << "," << dollarY << endl;
    int sizeMax = 12;//地图最大边缘
    //输出
    for (int i = 1; i <= sizeMax; ++i) {
        for (int j = 1; j <= sizeMax; ++j) {
            if (i == 1 || i == sizeMax || j==1 || j==sizeMax)
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