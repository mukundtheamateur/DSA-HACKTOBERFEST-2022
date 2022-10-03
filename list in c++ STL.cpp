#include"iostream"
#include"list"
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for(it=lst.begin();it!=lst.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int>list1;
    //list<int>list2(7);
    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(8);
    list1.push_back(3);
   // display(list1);
    //list1.pop_back();
  //  list1.remove(9);
 // list1.pop_front();
 //list1.pop_back();
  //list1.sort();
  // list1.reverse();
   // display(list1);

    list<int>list2(3);
    list<int>::iterator iter;
    iter=list2.begin();
    *iter=88;
    iter++;
     *iter=66;
    iter++;
     *iter=47;
    iter++;
    //display(list2);
    list1.sort();
    list2.sort();
    display(list1);
    display(list2);
   list1.merge(list2);
   cout<<"list 1 after merging:"<<endl;
   display(list1);
}


