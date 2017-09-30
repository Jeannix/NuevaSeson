#include <iostream>

using namespace std;

void func_1(int *x)
    {
        *x-=10;
    }
int func_2(int &x)
    {
        x=x*2;
        return 0;
    }
int main()
{
    //1
    int b_1;
    int *yptr= &b_1;
    *yptr=10;
    cout << *yptr << endl;
    cout << b_1 << endl;
    //2
    int &y =b_1;
    y=20;
    cout << y << endl;
    //3
    int b_2=218;
    int *fptr=&b_2;
    func_1(fptr);
    cout << *fptr << endl;
    //4
    int b_3;
    b_3=20;
    func_2(b_3);
    cout << b_3 << endl;
    //5
    int *optr;
    int b_4= 19;
    optr=&b_4;
    cout << optr << endl;
    cout << &b_4 << endl;
    //6
    *optr+=100;
    cout << b_4 << endl;
    //7
    int arr[5];
    int *arrptr=arr;
    cout << "ingrese 5 numeros " << endl;
    cin >> *arrptr >> *(arrptr+1) >> *(arrptr+2) >> *(arrptr+3) >> *(arrptr+4);
    cout << "LOLZ numeros son : " << endl;
    for(int i=0;i<5;i++)
        cout << arr[i] << endl;
    //8
    for(int i=4;i>=0;i--)
        cout << arr[i]<< endl;
        //cout<<*(p+1);
    //9
    int*pult = arrptr+5;
    cout<<pult-arrptr;
    //10
    int b_5;
    int b_6;
    int * const pint = &b_5;
    // const int *pint =&b_5;
    // pint = &b_6;
    *pint =20;
    cout << *pint;
    //12
    char* txt ="Char*";
    for(int i=4;i>=0;i--)
        cout << txt[i];
}
