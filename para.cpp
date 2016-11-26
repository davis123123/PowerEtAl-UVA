#include <iostream>

using namespace std;

int main() {
  int num;
  string n;
  getline(cin, n);
  num = stoi(n);
  //cin>>num;
  for(int i=0;i<num;i++){
    string s;
    getline(cin, s);
    //cin >> s;
    bool found = false;
    while(s.length()>0 && (s[s.length()-1]=='(' || s[s.length()-1]=='[')) {
      s.erase(s.length()-1,1);
      cout << "NO" << endl;
      found = true;
      break;
    }
    if(found == true) {
      continue;
    }
    while(s.length()>0 && (s[0]==')' || s[0]==']')) {
      s.erase(0,1);
      cout << "NO" << endl;
      found =true;
      break;
    }
    if(found == true) {
      continue;
    }

    int round[128] = {0};
    int square[128] = {0};
    int countR=0;
    for(int j=0;j<s.length();j++){
      if(s[j] == '(') {
        round[countR]++;
      } else if(s[j] == ')') {
        round[countR]--;
        if(round[countR] < 0) {
          break;
        }
      } else if(s[j]=='[') {
        square[countR]++;
        countR++;
      } else if(s[j]==']'){
        countR--;
        if(countR <0) {
        square[countR] = 1;
          break;
        }
        square[countR]--;
        if(square[countR] < 0) {
          break;
        }
      }
    }
    string ans="YES";
    for(int j=0;j<128;j++) {
      if(round[j]!=0) {
        ans="NO";
        break;
      }
      if(square[j]!=0) {
        ans="NO";
        break;
      }
    }
    cout << ans<<endl;
  }
  return 0;
}
