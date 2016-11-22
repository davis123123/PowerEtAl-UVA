/*PowerEtAl
* Program takes 2 inputs, base and exponent
* Output 1's digit of result
* Formula: (base%10) ^ ((exponent%100)%4) = result%10
*/

#include <iostream>
#include <cmath>
#include <string>
#include <cmath>
using namespace std;

int main(){
  string base, power;
  int baseArr[100000], powerArr[100000];
  int result[100000];
  string zero = "0";
  int i = 0;
  int x = 0;
    while(1){

    cin >> base;
    cin >> power;
    if(base == zero && power == zero)
      break;

    baseArr[i] = base.back() - '0';

    if(power.length() >= 2){
      powerArr[i] = power.back() - '0';
      powerArr[i] += (power.at(power.size() - 2) - '0') * 10;
      }
    else
      powerArr[i] = power.back() - '0';
    i++;
  }
  for(int c = 0; c < i; c++){
    powerArr[c] %= 4;
    if(powerArr[c] == 0)
      powerArr[c] += 4;
    result[c] = pow(baseArr[c],powerArr[c]);
    result[c] %= 10;
    cout <<result[c]<<endl;
  }



  return 0;
}
