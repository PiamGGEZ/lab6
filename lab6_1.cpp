#include<iostream>
using namespace std;
 
int main(){
    int n,Evennumbers = 0,Oddnumbers = 0 ;
    while(true){
        cout << "Enter an integer: ";
        cin >> n;
        if(n==0){
            break;
        }
        else if (n %2==0){
            Evennumbers++;
        }
        else{
            Oddnumbers++;
        }
        
    }
    
    cout << "#Even numbers = "<<Evennumbers;
    cout << "\n#Odd numbers = "<<Oddnumbers;
    return 0;
}