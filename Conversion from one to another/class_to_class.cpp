#include<bits/stdc++.h>
using namespace std;
class Product
{
    int p,q;
public:
    Product(int p,int q)
    {
        this->p=p;
        this->q=q;
    }
    getP()
    {
        return p;
    }
    getQ()
    {
        return q;
    }
};
class Item
{
    int  a,b;
public:
    Item()//default constructor
    {
        a=0;
        b=0;
    }
    Item(Product obj)//conversion constructor called
    {
        cout<<"conversion from Product to Items"<<endl;
        this->a=obj.getP();
        this->b=obj.getQ();
    }
    //overloading of = operator
    void operator=(Product obj)
    {
        cout<<endl<<"= operator called";
        this->a=obj.getP();
        this->b=obj.getQ();
    }
    void showItems()
    {
        cout<<endl<<"a: "<<a<<" "<<"b: "<<b<<endl;
    }
};

int main()
{
    Item obj;
    obj.showItems();
    Product Product_obj(9,10);
    obj=Product_obj;//assignment of product object to Item Object
    obj.showItems();

    cout<<"\n______call to conversion constructor_____\n";
    Item new_obj=Product_obj;


}