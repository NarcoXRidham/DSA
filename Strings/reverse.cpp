#include<iostream>
#include<string.h>
using namespace std;
void reversal(char ch[],int size){
    int i=0;
    int j=size-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
}
int main(){
    char ch[100];
    cin>>ch;
    cout<<"Before Reversal of String:"<<ch<<endl;
    int len=strlen(ch);
    reversal(ch,len);
    cout<<"After reversal of String:"<<ch<<endl;
    return 0;
}