#include<iostream>
using namespace std; 
class Item{
private:
    static int count;
public:
    Item(){
        count++;
    }
    int getCount(){
        return count;
    }
    int* getCountAddress(){
        int* p=&count;
        return p;
    }
};

int Item::count=0;

int main(){
    Item objItem1;
    Item objItem2;

    cout<<objItem1.getCount()<<' ';
    cout<<objItem2.getCount()<<' ';
}