#include<iostream>

using namespace std;

class Rectangle
{
    private:
            int length;
            int breadth;
    public:
            Rectangle(int l, int b)
            {
                length = l;
                breadth = b;
            }

            int area()
            {
                return length*breadth;
            }

            void changelength(int l)
            {
                length = l;
            }
};


int main()
{
    int l, b, lx;
    cout<<"Enter the length: ";
    cin>>l;
    cout<<endl<<"Enter the breadth: ";
    cin>>b;
    Rectangle r(5,7);
    cout<<"Area of Rectangle is "<<r.area();
    r.changelength(lx);
    return 0;
}