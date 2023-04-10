#include<iostream>

using namespace std;

class Operators{
    int number;

    public:
        Operators(){
            cout<<"Enter the value of a number = ";
            cin>>number;
        }

        int operator - (Operators obj)
        {
            int result;
            result = number - obj.number;
            return result;
        }
        void operator ++(int)
        {
            number++;
        }
        void display(){
            cout<<"value of number = "<< number <<endl;
        }
};

int main() {
    Operators obj1, obj2, obj3;

    int difference = obj1 - obj2;
    cout<<"Difference of obj1 and obj2 = " << difference <<endl;

    obj3 ++;
    obj3.display();
    
    return 0;
}