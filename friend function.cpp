#include"iostream"
using namespace std;

class complex
{
    int a,b;
    friend complex sumcomplex(complex o1,complex o2);   // giving permission to use private data

public:
    void setnumber(int v1,int v2)
    {
        a=v1;
        b=v2;
    }
    void getnumber()
    {
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};

complex sumcomplex(complex o1,complex o2)
{
    complex o3;
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;

}
int main()
{
    complex c1,c2,c3;
    c1.setnumber(1,4);
    c1.getnumber();

    c2.setnumber(4,1);
    c2.getnumber();

    c3=sumcomplex(c1,c2);
    c3.getnumber();

    return 0;
}
