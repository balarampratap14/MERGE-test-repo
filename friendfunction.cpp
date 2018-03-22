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
<<<<<<< HEAD
     //function definition here we go
=======
    //func def
>>>>>>> test
    d.meter=20;
	d.c=30; //accessing private data from non-member function of class Distance..
    cout<<d.meter<<d.c;
	return d.c; 
}

int main()
{ 
    Distance D;
    cout<<"Distace: "<<func(D);
    return 0;
}
