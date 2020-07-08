#include<iostream>
using namespace std;
int main()
{
    struct student
    {
        int roll;
        char name[100];
        int marks;
    };
    struct student r[100];
    int n,i,max=-9999,min=9999,k=0,l=0;
    cout << "Enter the no of student:";
    cin >> n;
    for(i=0;i<n;i++)
    {
        cout << "Enter the Name:";
        cin >>r[i].name;
        cout << "Enter the Roll No:";
        cin >>r[i].roll;
        cout << "Enter the marks:";
        cin >>r[i].marks;
    }
    cout << "\n";
    for(i=0;i<n;i++)
    {
        cout <<"Name= " << r[i].name <<" ";
        cout <<"Roll= "<< r[i].roll<< " ";
        cout <<"Marks= "<< r[i].marks<<"\n";
    }
    cout<<"\n";
    for(i=0;i<n;i++)
    {
        if(r[i].marks > max)
        {
            max=r[i].marks;
            k=i;
        }
        if(r[i].marks < min)
        {
            min=r[i].marks;
            l=i;
        }
    }
    cout << "Highest Marks:";
    cout <<"Name= " << r[k].name <<" ";
    cout <<"Roll= "<< r[k].roll<< " ";
    cout <<"Marks= "<< r[k].marks<<"\n";
    cout << "Minimum Marks:";
    cout <<"Name= " << r[l].name <<" ";
    cout <<"Roll= "<< r[l].roll<< " ";
    cout <<"Marks= "<< r[l].marks<<"\n";
}
