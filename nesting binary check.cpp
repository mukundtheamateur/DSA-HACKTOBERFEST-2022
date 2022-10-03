#include"iostream"
#include"string"
using namespace std;

class binary
{
    private:
    string s;
    public:
        void read(void);
        void chk_binary(void);
        void ones_compliment();
        void display(void);
};

void binary::read(void)
{
    cout<<"enter binary number"<<endl;
    cin>>s;
}
void binary ::chk_binary(void)
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)!='0'&&s.at(i)!='1')
        {
            cout<<"incorrect binary formate"<<endl;
           exit(0);
        }
    }
}
void binary:: ones_compliment()
{
    for(int i=0;i<s.length();i++)
    {
        if(s.at(i)=='0')
        {
            s.at(i)='1';
        }
        else
        {
            s.at(i)='0';
        }
    }
}
void binary:: display(void)
{
    cout<<"displaying your binary number"<<endl;
    for(int i=0;i<s.length();i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}
int main()
{
    binary b;
    b.read();
    b.display();
    b.chk_binary();
    b.ones_compliment();
    b.display();
    return 0;
}
