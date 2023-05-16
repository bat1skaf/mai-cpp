#include<iostream>
using namespace std;

int main(){
    string str;
    cin >> str;
    
    int Uppercase = 0;
    int digit = 0;
    int zapyt = 0;
    for (int i = 0; i < str.length(); i++){
        if (str[i] >= 'A' && str[i] <= 'Z'){
            Uppercase++;
        }
        else if(str[i]>= '0' && str[i]<= '9'){
            digit++;
        }
        else if(str[i] == ',') {
            zapyt++;
        }
    }
    cout<<"Заглавных: "<<Uppercase<< endl;
    cout<<"Цифр: "<<digit<< endl;
    cout<<"Запятых: "<<zapyt<< endl;
}
