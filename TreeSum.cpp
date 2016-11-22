#include <iostream>
#include <cctype>
#include <cstring>
#include <stdio.h>

using namespace std;

int read();

int main(){

  read();

  return 0;
}

int read(){
   while(1){
  string input;
  int sum = 0, dec = 1, result = 0, arrCount = 0, i, temp = 0;
  int leaf = 2;
  bool found = false;
  int treeArr[100];
  getline(cin, input);
  if(!cin)
    break;

  for(i = 0; i < input.length(); i++){
    if(isdigit(input.at(i))){
      if(sum == 0)
        sum = input.at(i) - '0';

      else{
        sum *= 10;
        sum += input.at(i) - '0';
        }
    }
    if(input.at(i) == ' ' || input.at(i) == '\n')
      break;

  }

  for(i; i < input.length(); i++){
    if(leaf == 0){
      if(result == sum){
        found = true;
        break;
      }
      else
        leaf = 2;
    }

    if(input.at(i) == '(')
      arrCount++;

    if(input.at(i) == ')'){
      if(input.at(i-1) == '('){
        arrCount--;
        leaf--;
        continue;
        }
      else{
        result -= treeArr[arrCount];
        arrCount--;
        }
    }

    if(isdigit(input.at(i))){
      if(isdigit(input.at(i+1))){
        temp = input.at(i) - '0';
        temp *= 10;
        temp += input.at(i + 1) - '0';
        treeArr[arrCount] = temp;
        result += temp;
        i++;
      }
      else{
        treeArr[arrCount] = input.at(i) - '0';
        result += input.at(i) - '0';
      }
    }
  }

  if(found == true)
    cout << "yes"<<endl;
  else
    cout<<"no"<<endl;

  }

}
