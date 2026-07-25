class Solution {
public:
    string reverseOnlyLetters(string s) {
     int i=0,j=s.size()-1;
     while(j>i){
        if(!isalpha(s[i]))i++;
        else if(!isalpha(s[j]))j--;
        else swap(s[i++],s[j--]);
     }   
     return s;
    }
};