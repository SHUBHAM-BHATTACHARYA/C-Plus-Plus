#include<iostream>
using namespace std;
class parent;
class child
{
private:
    float inc;
public:
    child(float x)
    {
        inc=x;
    }
    friend void totalincome(child c,parent p);
};
class parent
{
private:
    float inc;
public:
    parent(float x)
    {
        inc=x;
    }
    friend void totalincome(child c,parent p);
};
void totalincome(child c,parent p)
{
    cout << "Total Income= " << (c.inc+p.inc);
}
int main()
{
    child c(10000);
    parent p(20000);
    totalincome(c,p);
}
