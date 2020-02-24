#include<iostream>
using namespace std;

class rectangle
{
    friend void ex(rectangle one);
    public:
        rectangle();
        ~rectangle();
        void set(int h,int w);
        int geth();
        int getw();
        rectangle add(rectangle one);
        void printall();
        rectangle(int h, int w);
        rectangle operator+(rectangle one);
        rectangle operator-(rectangle one);
        int operator<(rectangle one);


    private:
        int height;
        int width;


};
