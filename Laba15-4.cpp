#include <iostream>//бібліотека вводу та виводу 
#define SIZE 4//розмір масиву 
using namespace std;//використання простору імен std

int main() {
    int numbers[SIZE];//оголошення масиву 
    int sum = 0;//оголошення змінної 

    cout << "Enter 4 numbers: "; //Виведення повідомлення
    cin >> numbers[0];//Ввід числа 1 
    cin >> numbers[1];//Ввід числа 2
    cin >> numbers[2];//Ввід числа 3 
    cin >> numbers[3];//Ввід числа 4 

    for (int i = 0; i < SIZE; ++i) {//використання циклу для перечислення значень 
        sum = sum + numbers[i];//що з цими значеннями потрібно робити 
    }


    cout << "Sum of array elements: " << sum << endl;//виведення результату 

    return 0;//Логічний кінець 
}