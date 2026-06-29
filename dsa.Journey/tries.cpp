#include<bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
    char data;
    TrieNode* children[26];
    bool isTerminal;

    TrieNode(char ch){
        data = ch;
        for(int i = 0 ; i<26 ; i++){
            children[i] = NULL;
        }
        isTerminal = false;
    }
};

class Trie{
    public:
    TrieNode* root;

    Trie(){
      root = new TrieNode('\0');
    }

    void insertUtil(TrieNode* root , string word){
         //base case
         if(word.length() == 0){
            root->isTerminal = true;
            return ;
         }

         int index = word[0] - 'A';
         TrieNode* child;
         
         //present
         if(root->children[index] != NULL){
            child = root->children[index];
         }
         else{
            //absent
            child = new TrieNode(word[0]);
            root->children[index] = child;
         }

         //recursion
         insertUtil(child , word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root,word);
    }

    bool searchUtil(TrieNode* root , string word){
         //base case
         if(word.size() == 0){
            return root->isTerminal;
         }

         int index = word[0] - 'A';
         TrieNode* child;

         //present
         if(root->children[index] != NULL){
            child = root->children[index];
         }
         else{
            //absent
            return false;
         }
    
         return searchUtil(child , word.substr(1));
    }

    bool searchWord(string word){
        return searchUtil(root,word);
    }

    void removeWord(string word){
        removeUtil(root,word);
    }

    void removeUtil(TrieNode* root , string word){
        if(word.size() == 0){
            root->isTerminal = false;
            return;
        }

        int index = word[0]-'A';
        TrieNode* child;

        //present
        if(root->children[index] != NULL){
            child = root->children[index];
        }
        else{
            //absent
            return ;
        }

        removeUtil(child , word.substr(1));

    }
};

int main(){

    Trie *t = new Trie();

    t->insertWord("ABCD");

    t->insertWord("KESHAV");

    t->insertWord("GARG");

    t->insertWord("AGGARWAL");

    cout<<"check weather the given string is present in it : "<<endl;
    if(t->searchWord("GARG")){
        cout<<"yes it is present in trie"<<endl;
    }
    else{
        cout<<"No it is not present in it"<<endl;
    }

    t->removeWord("GARGA");

    cout<<"check weather the given string is present in it : "<<endl;
    if(t->searchWord("GARG")){
        cout<<"yes it is present in trie"<<endl;
    }
    else{
        cout<<"No it is not present in it"<<endl;
    }

    return 0;
}