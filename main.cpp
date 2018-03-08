//Class collaboration for learning how to use vectors
#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector <int> bpm;
  vector <int> steps;
  vector <int> calories;
/*
  bpm.resize(10);
  bpm.push_back(90);
  bpm.push_back(100);    
  int length = bpm.size();
*/
int rate;
int highest;

 // cout << "bpm is currently size, " << length <<endl;
//  cout << "The last item in bpm is ..." << bpm[length-1] << endl;
  cout << "The items in bpm are ..." << endl;
  for (int i=0; i<bpm.size(); i++){
    cout << bpm[i] << endl;
  }

  do{
    cout << "please" << endl;
    cin >>rate;
    bpm.push_back(rate);
  }while(rate != -1);


for (int i=1; i<bpm.size(); i++){
  if ( bpm[i-1] < bpm[i]){
    highest = bpm[i];
  }
}

cout << highest<<endl;





  return 0;
}
