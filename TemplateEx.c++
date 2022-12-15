#include<iostream>

using namespace std;
template<class T>
class Calculator
{
private:
    T num1;
    T num2;
public:
    Calculator()
    {
        num1=num2=0;
    }
    Calculator(T num1, T num2);
    T add();
    T sub();
    T mul();
    T mod();
};

template<class T>
Calculator<T>::Calculator(T num1, T num2)
{
    this->num1 = num1;
    this->num2 = num2;
}

template<class T>
T Calculator<T>::add()
{
    return num1+num2;
}

template<class T>
T Calculator<T>::sub()
{
    return num1-num2;
}

template<class T>
T Calculator<T>::mul()
{
    return num1*num2;
}

template<class T>
T Calculator<T>::mod()
{
    return num1%num2;
}

int main()
{
    float a, b;
    cout<<"Enter the numbers: "<<endl;
    cin>>a>>b;
    // Calculator<int> cal(a,b);
    // cout<<cal.add()<<endl;
    Calculator<float> cal(a,b);
    cout<<cal.mul();
}