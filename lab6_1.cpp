#include<iostream>
using namespace std;

int main(){
    int i=1;
    int num[i];

    while(num[i-1] != 0){
        cout << "Enter an integer: ";
        cin >> num[i];
        i++;
    }
    int a=0,b=0,c=0;
    while(a < i-1){
        if(num[a]%2==0){
            b++;
        }else{
            c++;
        }
        a++;
    }
  
    cout << "#Even numbers = " << b << endl;
    cout << "#Odd numbers = " << c-1;
    return 0;
}
