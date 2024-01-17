// encapsulation: function that binds the variables and methods into a class. 
#include <iostream>

using namespace std;

class rectangle{
    int x;
    public:
    void set(int n){
        x=n;
    }
    int get(){
        return x;
    }
};
int main()
{
   rectangle obj1;
   obj1.set(3);
   cout<<obj1.get()<<endl;

    return 0;
}