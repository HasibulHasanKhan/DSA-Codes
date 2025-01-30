#include <bits/stdc++.h>
using namespace std;


void printFrequencies(const string str)
{
 
  unordered_map<string, int> wordFreq;
  
  // breaking input into word using 
  // string stream
  // Used for breaking words
  stringstream ss(str);
  
  // To store individual words
  string word; 
  while (ss >> word)
    wordFreq[word]++;

  // now iterating over word, freq pair 
  // and printing them in <, > format
  unordered_map<string, int>:: iterator p;
  for (p = wordFreq.begin(); 
       p != wordFreq.end(); p++)
    cout << "(" << p->first << ", " <<
                   p->second << ")\n";
}

// Driver code
int main()
{
  string str = "geeks for geeks geeks quiz "
               "practice qa for";
  printFrequencies(str);
  return 0;
}