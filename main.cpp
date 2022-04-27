#include <iostream>

using namespace std;

//Rectrangle class
class rectrangle{

private: //Attributes
    int width; //10
    int length;//8

public:  //Behaviors 
    void setWidth(int no);
    void setLength(int no);
    int calcArea();

};

void rectrangle::setWidth(int no) {
    width=no; //set width
}

void rectrangle::setLength(int no) {
    length=no;  //set length
}

int rectrangle::calcArea() {
    int Area;
    Area = width*length;
    return Area;
}


int main() {
    rectrangle rec; //create object using retrangle class

    int w,l;//variables

    cin>>w; //get input
    cin>>l; //get input


    rec.setLength(l);//setLength(8)
    rec.setWidth(w); //setWidth(10)
    cout<<"return is:"<<rec.calcArea()<<endl;

    return 0;
}
