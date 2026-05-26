#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool strongPasswordCheckerII(string password) {
        bool found1=false,found2=false,found3=false,found4=false,found5=false;
        if(password.size()<8)
        {
            return false;
        }
        if(password.size()>=8)
        {
            found1=true;
        }
        for(int i=0;i<password.size();i++)
        {
            if(password[i]>='a' && password[i]<='z')
            {
                found2=true;
            }
            else if(password[i]>='A' && password[i]<='Z')
            {
                found3=true;
            }
            else if(password[i]>='0' && password[i]<='9')
            {
                found4=true;
            }
            else if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='^' || password[i]=='&' || password[i]=='*' || password[i]=='(' || password[i]==')' || password[i]=='-' || password[i]=='+')
            {
                found5=true;
            }
            if(password[i]==password[i+1])
            {
                return false;
            }
        }
        return found1 && found2 && found3 && found4 && found5;
    }
};