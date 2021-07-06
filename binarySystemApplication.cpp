#include<iostream>
#include<conio.h>
#include<bits/stdc++.h>

using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        int y = n%10;
        ans += x*y;
        x *= 2;
        n /= 10;
    }
    return ans;
    
}

int octaToDecimal(int n){
    int ans = 0;
    int x = 1;
    while (n>0)
    {
        int y = n%10;
        ans += x*y;
        x *= 8;
        n /= 10;
    }
    return ans;
    
}

int hexadecimaltoDecimal(string n){
    int ans = 0;
    int x = 1;
    int s = n.size();
    for (int i=s-1; i>=0; i--)
    {
        if (n[i] >= '0' && n[i] <= '9'){
            ans += x*(n[i]-'0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F'){
            ans += x*(n[i]-'A' + 10);
        }

        x *= 16;
    }
    return ans;
    
}

int decimalToBinary(int n){
    int x = 1;
    int ans = 0;
    while (x <= n)
    {
        x *= 2;
    }
    x/=2;

    while (x>0)
    {
        int lastDigit = n/x;
        n -= lastDigit*x;
        x/=2;
        ans = ans*10 + lastDigit;
    }
    return ans;
    
    

}

int decimalToOcta(int n){
    int x = 1;
    int ans = 0;
    while(x>0){
        x *= 8;
    }
    x /= 8;
    while(x>0){
        int lastDigit = n/x ;
        n -= lastDigit*x;
        x/=8;
        ans = ans*10 + lastDigit;

    }
    return ans;
}

string decimalToHexadecimal(int n){
    int x = 0;
    string ans = "";
    while(x <= n){
        x *= 16;
    }
    x /=16;

    while(x>0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 10;

        if (lastDigit <= 9){
            ans = ans + to_string(lastDigit);
        }
        else{
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main(){
    cout<<"---------ASHWANI KHARWAR---------"<<endl;
    cout<<"What do you want?"<<endl;
    cout<<"1.binaryToDecimal"<<endl;
    cout<<"2.octalToDecimal"<<endl;
    cout<<"3.hexadecimalToDecimal"<<endl;
    cout<<"4.decimalToBinary"<<endl;
    cout<<"5.decimalToOcta"<<endl;
    cout<<"6.decimalToHexadecimal"<<endl;

    int a;
    cin>>a;

    if (a==1){
        int n;
        cin>>n;
        cout<<binaryToDecimal(n)<<endl;
        
    }
    if (a==2){
        int n;
        cin>>n;
        cout<<octaToDecimal(n)<<endl;
    }
    if (a==3){
        string n;
        cin>>n;
        cout<<hexadecimaltoDecimal(n)<<endl;
    }
    if (a==4){
        int n;
        cin>>n;
        cout<<decimalToBinary(n)<<endl;
    }
    if (a==5){
        int n;
        cin>>n;
        cout<<decimalToOcta(n)<<endl;
    }
    if (a==6){
        int n;
        cin>>n;
        cout<<decimalToHexadecimal(n)<<endl;
    }
    
    cout<<" if you want run again y/n: ";
    char run;
    cin>>run;
    if(run == 'y'){
        return main();
    }
    else{
        return 0;
    }

    getch();
  return 0;

    
    
}
