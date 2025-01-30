#include <iostream>
#include <unordered_map>
using namespace std;

// int main () {
//     unordered_map<string, double> umap = {
//         {"one", 1},
//         {"two", 2},
//         {"two", 3}
//     };

//      umap["PI"] = 3.14;
//      umap["root2"] = 1.414;
//      umap["root3"] = 1.732;
//      umap["log10"] = 2.302;
//      umap["loge"] = 1.0;

//      umap.insert(make_pair("e", 2.718));
    

//     string key = "PI";

//     if(umap.find(key) == umap.end()){
//         cout << "Not found " << endl;
//     } else {
//         cout << "Found" << key << endl;
//     }
//    // Iterator over map.

//    unordered_map<string, double>:: iterator itr;

//    cout << "All Elements are : " << endl;

//    for (itr = umap.begin(); itr !=umap.end(); itr++) {
//     cout << itr->first << " " << itr->second << endl;
//    }
// };

int main () {
     unordered_map<string, double> umap = {
        {"One", 1},
        {"Two", 2},
        {"Three", 3}
    };

    string key = "Two";

    if ( umap.count(key) == 0) {
        cout << key << "not Found" <<endl;
    } else {
        cout << "Found " << key << "\n";
    }

    key = "Four";

    if (umap.count(key) == 0) {
        cout << key << " Not Found" <<endl;
    } else {
        cout << "Found " << key << endl;
    }
}