//Да се провери дали одреден внесен шестцифрен број е симетричен.
// Тоа значи првата цифра на бројот да е еднаква со последната, втората цифра со
// претпоследната… Пример за симетрични броеви: 123321, 805508, 999999.
// Да се испечати 1 ако е симетричен, 0 ако не е симетричен.

#include <iostream>
using namespace std;
int main()
{
    int broj;
    cin>>broj;//ABCDEF
    if( (broj/100000)==(broj%10) && (broj/10000%10)==(broj%100/10) && (broj/1000%10)==(broj%1000/100))
    {
        cout<<1;
    }
    else
    {
        cout<<0;
    }
    return 0;
}
