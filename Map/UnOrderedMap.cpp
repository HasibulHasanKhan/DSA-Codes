#include <iostream>
#include <unordered_map>
using namespace std;

// Driver code
int main()
{
 
//   unordered_map<string, int> umap;

//   umap["GeeksforGeeks"] = 10;
//   umap["Practice"] = 20;
//   umap["Contribute"] = 30;


//   for (auto x : umap)
//     cout << x.first << " " << 
//             x.second << endl;

    unordered_map<string, int> umap;

    umap["Hasib"] = 20;
    umap["Hasan"] = 207;
    umap["Hasibs"] = 201;
   
    for (auto x : umap){
        cout << x.first << " " << x.second << endl;
    }



}