#include<iostream>
#include<string>
using namespace std;

int main(){
  string s;
  getline(cin, s);
  bool isPalindrome = true;
  for(int i = 0; i < s.length()/2; i++){
      if(s[i] != s[s.length()-i-1]){
          isPalindrome = false;
          break;
      }
  }
  if(isPalindrome)
    cout<<"YES";
  else
    cout<<"NO";
  return 0;
}
