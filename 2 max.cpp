#include <iostream>
#include <cmath>
using namespace std;
int main()
{int speed;
 cin>>speed;// начальная скорость автомобиля
while ( speed <= 60 ) // заголовок цикла while
speed = speed + 10;
cout<<speed;
    return 0;
}
 /*форма записи цикла while
while (/*условие продолжения цикла while*/
/*
блок операторов*/
/*управление условием*/
/*
