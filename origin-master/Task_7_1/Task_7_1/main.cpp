/*
 Задача 1. Математические функции
 В этом задании вы вынесете математические функции в отдельный файл.

 Даны следующие математически функции: сложение, вычитание, умножение, деление, возведение в степень.

 Вам нужно разместить их в отдельном файле исходного кода и воспользоваться ими из функции main.

 Попросите пользователя ввести два числа и выбрать операцию. Выведите результат ему на консоль.

 Пример работы программы
 Консоль
 Введите первое число: 20
 Введите второе число: 2
 Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): 5
 20 в степени 2 = 400
 

 */

#include <iostream>
#include "math.hpp"

using namespace std;

int main ()
{
    int num1 ;
    int num2 ;
    int code ;
   
    cout << "Enter first num : ";
    cin >> num1;
    cout << "\nEnter second num : ";
    cin >> num2;
    
    cout << "Choose operation (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    cin >> code;
    
    if (code == 1){
        cout << num1 << " + "<< num2<<" = " << add(num1,num2)<< endl;
    } else if ( code == 2){
        cout << num1 << " - "<< num2<<" = " << mns(num1,num2)<< endl;
    }else if ( code == 3){
        cout << num1 << " * "<< num2<<" = " << mult(num1,num2)<< endl;
    }else if ( code == 4){
        cout << num1 << " / "<< num2<<" = " << del(num1,num2)<< endl;
    }else if ( code == 5){
        cout << num1 << " в степени "<< num2<<" = " << degree(num1,num2)<< endl;
    }
    
    return 0;
    
}
