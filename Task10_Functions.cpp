#include<iostream>
using namespace std;
int largerNumber(int n1, int n2){
    int result;
    if(n1>n2){
        result = n1;
    }else{
        result = n2;
    }
    return result;
}
int main(){
    int a=10,b=20, result;

    result = largerNumber(a,b);
    cout<<"The greater number of the two is "<<result;
    return 0;
}
/*#include<iostream>
using namespace std;
int add(int x, int y);
int subt(int x, int y);
int mult(int x, int y);
int divide(int x, int y);
int main(){
    int a,b;
    cout<<"Please enter first number = ";
    cin>>a;
    cout<<endl<<"Please enter second number = ";
    cin>>b;

    cout<<


}*/

