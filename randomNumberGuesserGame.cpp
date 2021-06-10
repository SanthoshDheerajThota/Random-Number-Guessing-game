#include <iostream>
#include <ctime>
using namespace std;
int main(){
    srand(time(NULL));
    const int randomNumber=rand()%100;
    bool found =false;
    int n,count=0;
    while(!found){
        if(count==0){
            cout<<endl<<"enter the first guess :"<<endl;
            cin>>n;
            count++;
            if(n==randomNumber){
                cout<<"wow you got it in first guess that is impressive "<<endl;
                found=true;
            }
            else if(n>randomNumber){
                cout<<"the number is less than ypur guess:"<<endl;
            }
            else if(n<randomNumber){
                cout<<"the number is greater than ypur guess:"<<endl;
            }
        }
        
        else {
            cout<<endl<<"enter the "<<count<<" number of guess :"<<endl;
            cin>>n;
            count++;
            if(n==randomNumber){
                cout<<"wow you got it that is impressive "<<endl;
                found=true;
            }
            else if(n>randomNumber){
                cout<<"the number is less than ypur guess:"<<endl;
            }
            else if(n<randomNumber){
                cout<<"the number is greater than ypur guess:"<<endl;
            }
        }
    }
    cout<<"you guessed it in "<<--count<<" number of guesses"<<endl;
    cout<<"thank you for using the program have a nice day "<<endl;
    return 0;
}