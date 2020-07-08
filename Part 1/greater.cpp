#include<iostream>
using namespace std;
class test
{
private:
    int x,y;
public:
    friend istream & operator >>(istream &in,test &t);
    friend ostream & operator <<(ostream &out,test &t);
};
istream & operator >>(istream &in,test &t)
{
    cout << "Enter the Integer value:";
    in >> t.x;
    in >> t.y;
    return(in);
}
ostream & operator <<(ostream &out,test &t)
{
    out << "\n x= " << t.x;
    out << "\n y= " << t.y;
    return(out);
}
int main()
{
    test t;
    cin >>t;
    cout <<t;
}
