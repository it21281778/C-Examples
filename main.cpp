#include <iostream>

using namespace std;

//Rectrangle class
class rectrangle{
  private:
    int width;
    int length;
  public:
    void setWidth(int no);
    void setLength(int no);
    int calcArea();

};

void rectrangle::setWidth(int no) {
    width=no;
}

void rectrangle::setLength(int no) {
    length=no;
}

int rectrangle::calcArea() {
    int Area;
    Area = width*length;
    return Area;
}
int main() {
    rectrangle rec; //create object using retrangle class

    int w,l;

    cin>>w;
    cin>>l;

    rec.setLength(l);
    rec.setWidth(w);

    cout<<rec.calcArea()<<endl;
    return 0;
}
