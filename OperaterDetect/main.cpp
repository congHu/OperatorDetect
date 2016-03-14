//
//  main.cpp
//  OperaterDetect
//
//  Created by David on 16/3/14.
//  Copyright (c) 2016年 David. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    
    int op = 0;
    bool opAdded = false;
    string sp[2];
    while (sp[0]==""||sp[1]==""||op==0) {
        cout<<"Input Expression (e.g. 5+6, 12/6, ...) : ";
        string s;
        cin>>s;
        for (int i=0; i<s.length(); i++) {
            if (s[i]!='0'&&s[i]!='1'&&s[i]!='2'&&s[i]!='3'&&s[i]!='4'&&s[i]!='5'&&s[i]!='6'&&s[i]!='7'&&s[i]!='8'&&s[i]!='9'&&s[i]!='.') {
                switch (s[i]) {
                    case '+':
                        op=1;
                        break;
                    case '-':
                        op=2;
                        break;
                    case '*':
                        op=3;
                        break;
                    case '/':
                        op=4;
                        break;
                    default:
                        op=0;
                        break;
                }
                opAdded = true;
            }else{
                if (opAdded) {
                    sp[1]+=s[i];
                }else{
                    sp[0]+=s[i];
                }
            
            }
        }
        if (op==4&&atof(sp[1].c_str())==0) {
            sp[1]="";
        }
    }
    switch (op) {
        case 1:
            cout<<atof(sp[0].c_str())+atof(sp[1].c_str())<<endl;
            break;
        case 2:
            cout<<atof(sp[0].c_str())-atof(sp[1].c_str())<<endl;
            break;
        case 3:
            cout<<atof(sp[0].c_str())*atof(sp[1].c_str())<<endl;
            break;
        case 4:
            cout<<atof(sp[0].c_str())/atof(sp[1].c_str())<<endl;
            break;
        default:
            break;
    }
    
}
