/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>        //підкльчення стандартної бібліотеки
using namespace std;      //використання пространства імен

int main()                 //заголовок основної функції
{                         //початок виконуваної частини
    int a;                //декларація змінної
    cout<<"Enter value a : ";   //виведенняя тексту
    cin >> a;                     //введення 
    int res = a - 5;            //обчислення результату
    cout << "a-5: " << res;     //виведення результату
    return 0;                    //повернення успішного завершення програми
}                  //кінець виконаної частини