#include <iostream>

using namespace std;

int main()
{
    int n;
    int a;
    int sum=0;


    cout<< "enter 4digit num: ";
    cin>> n;

        if(n>=1000&&n<=9999){

        while(n>0){
        a=n%10;
        sum=sum+a;
        n=n/10;

    }
    cout << "sum is: "<<sum<<endl;
    }


        else {
            cout<<"error" << endl;
        }
    return 0;
}
