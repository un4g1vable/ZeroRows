#include <iostream>
using namespace std;

int main () {
    int counter = 0;
    int r,c;
    double a[40][40];
    cout << "Введите количество строк(до 40): ";
    cin >> r;
    cout << "Введите количество столбцов(до 40): ";
    cin >> c;

    cout << endl << "Ввод элементов матрицы: " << endl; 

    for (int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j){
            cout << "Введите элемент A: " << "[" << i+1 << "]" << "[" << j+1 << "]" << " : ";
            cin >> a[i][j];
        }
    // ^ ввод матрицы
    for (int i = 0; i < r; ++i)
        for(int j = 0; j < c; ++j){
            if (a[i][j] != 0)
                break;
            if (j == c-1)
                counter++;}

cout << "\n" "Количество нулевых строк: " << counter << endl;
}
