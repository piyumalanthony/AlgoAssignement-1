#include "BST.h"
#include "RBTree.h"
#include "SplayTree.h"
#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>

using namespace std;
using namespace std::chrono;

BST insertToBST(ifstream& f, string x){
    BST bst = BST();
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
       bst.put(stoi(x),stoi(x)  );
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "BST insertion time " << duration.count() << endl;
    cout << "BST height " << bst.height() << endl;
    cout << "BST size " << bst.size() << endl;
    return bst;
}

RBTree  insertToRBTree(ifstream& f, string x){
    RBTree rbTree = RBTree();
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        rbTree.put(stoi(x),stoi(x) );
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "RBTree insertion time " << duration.count() << endl;
    cout << "RBTree height " << rbTree.height() << endl;
    cout << "RBTree size " << rbTree.size() << endl;
    return rbTree;

}

SplayTree insertToSplayTree(ifstream& f, string x){
    SplayTree splayTree;
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        splayTree.put(stoi(x),stoi(x) );
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "SplayTree insertion time " << duration.count() << endl;
    cout << "SplayTree height " << splayTree.height() << endl;
    cout << "SplayTree size " << splayTree.size() << endl;
    return  splayTree;

}
void deleteFromBST(BST bst, ifstream& f, string x){
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        bst.del(stoi(x));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "BST deletion time " << duration.count() << endl;
    cout << "BST height after deletion " << bst.height() << endl;
    cout << "BST size after deletion " << bst.size() << endl;

}

void deleteFromRBTree(RBTree rbTree, ifstream& f, string x){
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        rbTree.del(stoi(x));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "RBTree deletion time " << duration.count() << endl;
    cout << "RBTree height after deletion " << rbTree.height() << endl;
    cout << "RBTree size after deletion " << rbTree.size() << endl;

}

void deleteFromSplayTree(SplayTree splayTree,ifstream& f, string x){
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        splayTree.del(stoi(x));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "SplayTree deletion time " << duration.count() << endl;
    cout << "SplayTree height after deletion " << splayTree.height() << endl;
    cout << "SplayTree size after deletion " << splayTree.size() << endl;

}

void searchBST(BST bst, string x, ifstream& f){
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        bst.get(stoi(x));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "BST search time " << duration.count() << endl;
    cout << "BST height after search " << bst.height() << endl;
    cout << "BST size after search " << bst.size() << endl;

}

void searchRBTree(RBTree rbTree, string x, ifstream& f){
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        rbTree.get(stoi(x));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "RBTree search time " << duration.count() << endl;
    cout << "RBTree height after search " << rbTree.height() << endl;
    cout << "RBTree size after search " << rbTree.size() << endl;

}

void searchSplayTree(SplayTree splayTree,  string x, ifstream& f){
    auto start = high_resolution_clock::now();
    while (getline(f, x, '\n')) {
        splayTree.search(stoi(x));
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "SplayTree search time " << duration.count() << endl;
    cout << "SplayTree height after search " << splayTree.height() << endl;
    cout << "SplayTree size after search " << splayTree.size() << endl;

}

int main() {

    ifstream file1("C:\\Users\\Piyumal Anthony\\CLionProjects\\AlgoAssignment-1\\data\\data_1.txt");
    ifstream file2("C:\\Users\\Piyumal Anthony\\CLionProjects\\AlgoAssignment-1\\data\\data_2.txt");
    ifstream file3("C:\\Users\\Piyumal Anthony\\CLionProjects\\AlgoAssignment-1\\data\\search_data.txt");
    ifstream file4("C:\\Users\\Piyumal Anthony\\CLionProjects\\AlgoAssignment-1\\data\\delete_data.txt");
    string x;
//    vector<int> input1;
//    vector<int> input2;
//    vector<int> searchData;
//    vector<int> deleteData;
//
//    while (getline(file1, x, '\n')) {
//        input1.push_back(stoi(x));
//    }
//    cout<< input1.size() << endl;
//    while (getline(file2, x, '\n')) {
//        input2.push_back(stoi(x));
//    }
//    cout<< input2.size() << endl;
//    while (getline(file3, x, '\n')) {
//        searchData.push_back(stoi(x));
//    }
//    cout<< input1.size() << endl;
//    while (getline(file4, x, '\n')) {
//        input1.push_back(stoi(x));
//    }
//    cout<< input1.size() << endl;

//    BST bst1 = insertToBST(file1,x);
//    searchBST(bst1,x,file3);
//    deleteFromBST(bst1,file4,x);
//    cout << '\n';
//
//    BST bst2 = insertToBST(file2,x);
//    searchBST(bst2,x,file3);
//    deleteFromBST(bst2,file4,x);
//    cout << '\n';
//
//    RBTree rbTree1 = insertToRBTree(file1,x);
//    searchRBTree(rbTree1, x,file3);
//    deleteFromRBTree(rbTree1,file4 ,x);
//    cout << '\n';
//
//    RBTree rbTree2 = insertToRBTree(file2,x);
//    searchRBTree(rbTree2,x,file3);
//    deleteFromRBTree(rbTree2,file4,x);
//    cout << '\n';

//    SplayTree splayTree1 = insertToSplayTree(file1,x);
//    searchSplayTree(splayTree1,x,file3);
//    deleteFromSplayTree(splayTree1,file4,x);
//    cout << '\n';

    SplayTree splayTree2 = insertToSplayTree(file2,x);
    searchSplayTree(splayTree2,x,file3);
    deleteFromSplayTree(splayTree2,file4,x);
    cout << '\n';



    cout << "Process executed!!!" << endl;
    return 0;

}



