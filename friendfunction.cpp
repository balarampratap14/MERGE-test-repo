#include<iostream>
using namespace std; 

class Distance {
    private:
        int meter,c; 
    public:
        Distance(): meter(0),c(0){ }
        friend int func(Distance); //friend function 
};

int func(Distance d){
    //function definition
    d.meter=10;
	d.c=25; //accessing private data from non-member function
    cout<<d.meter<<d.c;
	return d.c; 
}

int main()
{ 
    Distance D;
    cout<<"Distace: "<<func(D);
    return 0;
}
