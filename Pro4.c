// จงเขียนโปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน 
// แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน 
// พร้อมหาว่าความสูงเฉลี่ยของนักเรียน 10 คนเป็นเท่าไร
#include <stdio.h>
const int size = 10;

int main ()
{
    int input_num[10];
    //loop input
    for (int i = 0;i < size;i++)
    {
        printf("input %d : ", i+1);
        scanf("%d", &input_num[i]);
        printf("num = %d\n", input_num[i]);
    }
    
    return 0;
}