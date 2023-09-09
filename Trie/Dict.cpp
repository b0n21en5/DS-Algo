//codestudio qs: trie implementation 

#include <bits/stdc++.h>
using namespace std;

class TrieNode{
    public:
        char data;
        TrieNode* children[26];
        bool isTerminal;

        TrieNode(char ch){
            data=ch;
            for(int i=0;i<26;i++){
                children[i]=NULL;
            }
            isTerminal=false;
        }

};

class Trie{
    TrieNode* root;

public:

    Trie(){
        root=new TrieNode('\0');
    }

    void insertUtil(TrieNode* root, string word){
        // base case
        if(word.length()==0){
            root->isTerminal=true;
            return;
        }

        int index=word[0]-'a';
        TrieNode* child;

        // for present char
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        // for absent char
        else{
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }

        // recursion
        insertUtil(child,word.substr(1));
    }

    void insertWord(string word){
        insertUtil(root, word);
    }

    bool searchUtil(TrieNode* root, string word){
        if(word.length()==0){
            return root->isTerminal;
        }

        int index=word[0]-'a';
        TrieNode* child;

        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            return false;
        }

        // recursion
        return searchUtil(child, word.substr(1));
    }

    bool serachWord(string word){
        return searchUtil(root, word);
    }


    bool prefixWord(TrieNode* root, string prefix){
        if(prefix.length()==0){
            return true;
        }

        int ind=prefix[0]-'a';
        TrieNode* child;

        if(root->children[ind]!=NULL){
            child=root->children[ind];
        }else{
            return false;
        }

        return prefixWord(child, prefix.substr(1));
    }

    bool startsWith(string prefix){
        return prefixWord(root, prefix);
    }
};


int main(){
    Trie* tr=new Trie();

    tr->insertWord("hello");

    cout<<"contains 'hello': "<<tr->serachWord("hello")<<endl;

    cout<<"starts with 'hel': "<<tr->startsWith("hel")<<endl;

    return 0;
}