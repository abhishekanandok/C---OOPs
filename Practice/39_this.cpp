#include<iostream>
using namespace std;
class A{
    int a;
    public:
        // A & setData(int a){
        //     this->a = a;
        //     return *this; //line 24 used for this.
        // }
        void setData(int a){
            //"a = a" -->this will be wrong ,because c++ always use local variable, but here a is class member. So same name not consider here, otherwise use "this".
            this->a = a;
        }

        void getData(){
            cout<<"The value of a is "<<a<<endl;
        }
};


//“this” is a keyword that is an implicit pointer. “this” pointer points to the object which calls the member function.
int main(){
    A a;
    a.setData(4);
    a.getData();
    // a.setData(4).getData();
    //when we return a object by "this"
    return 0;
}
