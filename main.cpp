#include <iostream>
#include <stdlib.h> // нужен для вызова функции rand(), srand()
#include <time.h> // нужен для вызова функции time()
using namespace std;

// Функция, которая генерирует случайное число с плавающей запятой и указанной точностью
// Функция получает 3 параметра:
// - min - нижний предел;
// - max - верхний предел;
// - precision - точность, количество знаков после комы.
float func(int num,int n)
{
    float temp = 1;
    int f = (n>0) ? n : n*-1;
    for (int t=0; t<f; t++)
    
    temp = (n>0) ? temp*num : temp/num;
    
    return temp;
}
double GetRandomNumberFloat(double min, double max, int precision)
{

    double value;
    
    value = rand() % (int)func(10, precision);
    
    value = min + (value / func(10, precision)) * (max - min);
    
    return value;
}
float pi(double num,double num2)
{
    float result;
    double total=0;
    double num1q=num*num;
    double num2q=num2*num2;
    double in_sec=0;
    
    for(int x = 0; x<10000000;x++)
    {
        total+=1;
        if(num1q+num2q<=1)
        {
            in_sec+=1;
        }
        
    }
    result = 4*in_sec/total;
    return result;
}
int main()
{
    
    double number;
    double number2;
    
    srand(time(0));
    
    
    number = GetRandomNumberFloat(-1, 1, 2);
    number2 = GetRandomNumberFloat(-1, 1, 2);
    cout << "number = " << number << endl;
    cout << "number = " << number2 << endl;
    pi(number,number2);
    cout << pi(number,number2)<< endl;
    return 0;
}
