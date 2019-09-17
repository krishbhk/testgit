#include<bits/stdc++.h>
using namespace std;

char st[100];
int top =0;

void  push(int a){
    if(top>=100){
        cout<<"OVERFLOW";
    }
    else{
        ++top;
        st[top] = a;
    }
}

void pop(){
    if(top<=-1){
        cout<<"UNBALANCED";
    }
    else
    {
        top--;
    }
    
}

int main(){
    char s[100];
    gets(s);

    for(int i=0;i<strlen(s);i++){
        if(s[i] == '('){
            push(i);
        }
        else if (s[i]  == ')')
        {
            pop();
        }
    }
    if(top == 0){
        cout<<"BALANCED";
    }
    else
    {
        cout<<"UNBALANCED";
    }
}