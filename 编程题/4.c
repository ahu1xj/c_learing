#include<stdio.h>
int main(void)
{
    double g = 10.0; // 重力加速度
    double t = 3.0;  // 时间
    double height;   // 下落距离


    height = 0.5 * g * t * t;

// .2表示表述小数点后两位。
    printf("物体在前 3 秒内下落的垂直距离为: %.2f 米\n", height);

    return 0;
}
