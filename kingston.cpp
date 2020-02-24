#include<iostream>
#include"kingston.h"
using namespace std;

rectangle::rectangle(int h, int w)
{
    this->set(h,w);
    
}
rectangle::rectangle()
{
    height=0;
    width=0;
}
rectangle::~rectangle()
{

}

void rectangle::set(int h, int w)
{
    height=h;
    width=w;
}

int rectangle::geth()
{
    return height;
}

int rectangle::getw()
{
    return width;
}

rectangle rectangle::add(rectangle one)
{
    rectangle temp;
    temp.height=this->height+one.height;
    temp.width=this->width+one.width;

    return  temp;
}

void rectangle::printall()
{
    cout<<"your height is: "<<endl;
    cout<<height<<endl; 
    cout<<"your width is: "<<endl;
    cout<<width<<endl;
}
rectangle rectangle::operator+(rectangle one) {
    rectangle tmp;
    tmp.height = this->height + one.height;
    tmp.width =  this->width + one.width;
    return tmp;
}

rectangle rectangle::operator-(rectangle one){
        rectangle temp;
        temp.height=this->height - one.height;
        temp.width=this->width - one.width;
        return temp;
}

int rectangle::operator<(rectangle one){
    if(this->width<one.width&& this->height<one.height)
        return 1;
    else
        return 0;
}
void ex(rectangle one) {
    cout << one.height<<endl;
    cout << one.width<<endl;
}
