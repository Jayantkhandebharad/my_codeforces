#include<bits/stdc++.h>
using namespace std;

string alternate(int n,int m){
  
  string s = "";
  while(n>0 && m>0){
    if(n>m){
      s+="BG";
    }
    else{
      s+="GB";
    }
    n--;
    m--;
  }
  while(n>0){
    s+="B";
    n--;
  }
  while(m>0){
    s+="G";
    m--;
  }
  return s;
}


int main(){
  ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    if (!inputFile || !outputFile) {
        cerr << "Error opening file." << endl;
        return 1;
    }
  int n,m;
  inputFile>>n>>m;
  outputFile<<alternate(n,m)<<endl;
  inputFile.close();
  outputFile.close();
  
}