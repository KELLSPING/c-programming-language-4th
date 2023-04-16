#include <iostream> // 為 input/output stream 的縮寫，為輸入/輸出串流
#include <cstdlib> // 為 standard library 的縮寫，為標準函數庫

using namespace std;

int main(void){
    char ch = 'T';
    int a = 12;
    float b = 12.63F;

    cout << ch << "是字元" << endl;
    cout << a << "是整數" << endl;
    cout << b << "是浮點數" << endl;

    return 0;
}