// จงเขียนโปรแกรมเพื่อหาค่า Body Mass Index จากค่าความสูงและน้ำหนัก ซึ่งมีสูตรการคำนวณดังนี้
// BMI = Weight / Height2
// เมื่อ Weight มีหน่วยเป็นกิโลกรัม และ Height มีหน่วยเป็นเมตร 
// (เกณฑ์การแบ่งน้ำหนักโดยใช้ BMI , ต่ำกว่า 18.5 น้ำหนักต่ำกว่าเกณฑ์ , 
// 18.5 - 24.9 ปกติ , 25.0 - 29.9 สูงกว่ามาตรฐาน , ตั้งแต่ 30.0 ขึ้นไป อ้วนเกินไป )
#include <stdio.h>

int main ()
{
    double h,w,bmi;
    printf("input height and weight : ");
    scanf("%lf %lf", &h, &w);
    
    bmi = w / ((h*h)*.0001);
    printf("BMI : %0.1lf\n", bmi);
    
    if (bmi >= 30)
    {
        printf("Obesity");
    }
    else if (bmi >= 25)
    {
        printf("Overweight");
    }
    else if (bmi >= 18.5)
    {
        printf("Normal");
    }
    else if (bmi < 18.5)
    {
        printf("Underweight");
    }
    return 0;
}