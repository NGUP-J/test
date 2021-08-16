// จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน 
// แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน 
// พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร
#include <stdio.h>
const int size = 10;

int main ()
{
    double input_num[10];
    double result = 0;
    //loop input
    for (int i = 0;i < size;i++)
    {
        printf("input %d : ", i+1);
        scanf("%lf", &input_num[i]);
        printf("num = %lf\n", input_num[i]);
        result+=input_num[i];
    }
    printf("%lf\n", result);
    printf("result : %lf", result/10);
    return 0;
}