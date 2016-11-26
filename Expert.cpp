#include <iostream>

using namespace std;


struct Expert{
  int low;
  int high;
  string maker;

};


int main(){
  int t, d, q;
  string mk;
  bool found = false;
  int l, h;
  cin >> t;

  for(int i = 0; i < t; i++){
    if (i != 0)
      cout<<endl;
    cin >>d;

    Expert dArray[d];

    for(int c = 0; c < d; c++){
      cin >> mk >> l >> h;
      Expert dx;
      dx.maker = mk;
      dx.low = l;
      dx.high = h;
      dArray[c] = dx;
    }

    cin >> q;
    int input;
    int qArray[q];
    for(int j = 0; j < q ;j++){
      cin >> input;
      qArray[j] = input;
    }


    string rArray[q];
    for(int e = 0; e < q; e++){
      rArray[e] = "";
    }
    for(int j = 0; j < d; j++){
      for(int c = 0; c < q; c++){
        if(qArray[c] >= dArray[j].low && qArray[c] <= dArray[j].high)
          if(rArray[c] != "" || rArray[c] == "-1")
              rArray[c] = "-1";
           else
            rArray[c] = dArray[j].maker;
      }
    }
    for(int l = 0; l < q; l++){
      if(rArray[l] == "" || rArray[l] == "-1")
        cout << "UNDETERMINED"<<endl;
      else
        cout << rArray[l]<<endl;
    }
  }

  return 0;
}
