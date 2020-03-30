#include "BST.h"
#include "RBTree.h"
#include "SplayTree.h"
#include <iostream>
#include <vector>
#include <chrono>
#include <fstream>

using namespace std;
using namespace std::chrono;

BST* insertToBST(vector<int> x){
    BST *bst = new BST();
    auto start = high_resolution_clock::now();
   for(int i : x){
       bst->put(i,i);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "BST insertion time " << duration.count() << endl;
    cout << "BST height " << bst->height() << endl;
    cout << "BST size " << bst->size() << endl;
    return bst;
}

RBTree*  insertToRBTree(vector<int> x){
    RBTree* rbTree = new  RBTree();
    auto start = high_resolution_clock::now();
    for(int i : x) {
        rbTree->put(i,i);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "RBTree insertion time " << duration.count() << endl;
    cout << "RBTree height " << rbTree->height() << endl;
    cout << "RBTree size " << rbTree->size() << endl;
    return rbTree;

}

SplayTree* insertToSplayTree(vector<int> x){
    SplayTree* splayTree = new  SplayTree();
    auto start = high_resolution_clock::now();
    for(int i : x) {
        splayTree->put(i,i);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "SplayTree insertion time " << duration.count() << endl;
    cout << "SplayTree height " << splayTree->height() << endl;
    cout << "SplayTree size " << splayTree->size() << endl;
    return  splayTree;

}
void deleteFromBST(BST* bst,vector<int> x){
    auto start = high_resolution_clock::now();
    for(int i : x){
        bst->del(i);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "BST deletion time " << duration.count() << endl;
    cout << "BST height after deletion " << bst->height() << endl;
    cout << "BST size after deletion " << bst->size() << endl;

}

void deleteFromRBTree(RBTree* rbTree, vector<int> x){
    auto start = high_resolution_clock::now();
    for( int i : x){
        rbTree->del(i);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "RBTree deletion time " << duration.count() << endl;
    cout << "RBTree height after deletion " << rbTree->height() << endl;
    cout << "RBTree size after deletion " << rbTree->size() << endl;

}

void deleteFromSplayTree(SplayTree* splayTree,vector<int> x){
    auto start = high_resolution_clock::now();
    for(int i : x){
        splayTree->del(i);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "SplayTree deletion time " << duration.count() << endl;
    cout << "SplayTree height after deletion " << splayTree->height() << endl;
    cout << "SplayTree size after deletion " << splayTree->size() << endl;

}

void searchBST(BST* bst,vector<int> x){
    auto start = high_resolution_clock::now();
    for( int i : x) {
        bst->get(i);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "BST search time " << duration.count() << endl;
    cout << "BST height after search " << bst->height() << endl;
    cout << "BST size after search " << bst->size() << endl;

}

void searchRBTree(RBTree* rbTree, vector<int> x){
    auto start = high_resolution_clock::now();
    for( int i : x) {
        rbTree->get(i);
        //cout << stoi(x) << endl;
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "RBTree search time " << duration.count() << endl;
    cout << "RBTree height after search " << rbTree->height() << endl;
    cout << "RBTree size after search " << rbTree->size() << endl;

}

void searchSplayTree(SplayTree* splayTree, vector<int> x){
    auto start = high_resolution_clock::now();
   for ( int i : x) {
        splayTree->contains(i);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(stop - start);
    cout << "SplayTree search time " << duration.count() << endl;
    cout << "SplayTree height after search " << splayTree->height() << endl;
    cout << "SplayTree size after search " << splayTree->size() << endl;

}

int main() {

    ifstream file1("C:\\Users\\Piyumal Anthony\\CLionProjects\\AlgoAssignment-1\\data\\data_1.txt");// replace with the global path of data1_.txt
    ifstream file2("C:\\Users\\Piyumal Anthony\\CLionProjects\\AlgoAssignment-1\\data\\data_2.txt");// replace with the global path of data_2.txt
    ifstream file3("C:\\Users\\Piyumal Anthony\\CLionProjects\\AlgoAssignment-1\\data\\search_data.txt");// replace with the global path of search_data.txt
    ifstream file4("C:\\Users\\Piyumal Anthony\\CLionProjects\\AlgoAssignment-1\\data\\delete_data.txt");// replace with the global path of delete_data.txt
    string x;
    vector<int> input1;
    vector<int> input2;
    vector<int> searchData;
    vector<int> deleteData;

    while (getline(file1, x, '\n')) {
        input1.push_back(stoi(x));
    }
    cout<< input1.size() << endl;
    while (getline(file2, x, '\n')) {
        input2.push_back(stoi(x));
    }
    cout<< input2.size() << endl;
    while (getline(file3, x, '\n')) {
        searchData.push_back(stoi(x));
    }
    cout<< searchData.size() << endl;
    while (getline(file4, x, '\n')) {
        deleteData.push_back(stoi(x));
    }
    cout<< deleteData.size() << endl;

    BST *bst1 = insertToBST(input1);
    searchBST(bst1,searchData);
    deleteFromBST(bst1,deleteData);
    cout << '\n';

    BST *bst2 = insertToBST(input2);
    searchBST(bst2,searchData);
    deleteFromBST(bst2,deleteData);
    cout << '\n';

    RBTree *rbTree1 = insertToRBTree(input1);
    searchRBTree(rbTree1, searchData);
    deleteFromRBTree(rbTree1,deleteData);
    cout << '\n';

    RBTree *rbTree2 = insertToRBTree(input2);
    searchRBTree(rbTree2,searchData);
    deleteFromRBTree(rbTree2,deleteData);
    cout << '\n';

    SplayTree *splayTree1 = insertToSplayTree(input1);
    searchSplayTree(splayTree1,searchData);
    deleteFromSplayTree(splayTree1,deleteData);
    cout << '\n';

    SplayTree *splayTree2 = insertToSplayTree(input2);
    searchSplayTree(splayTree2,searchData);
    deleteFromSplayTree(splayTree2,deleteData);
    cout << '\n';



    cout << "Process executed!!!" << endl;
    return 0;

}



