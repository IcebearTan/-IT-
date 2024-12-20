


typedef struct Trie{
    struct Trie* children[26];
    int end;
} Trie;


Trie* trieCreate() {
    Trie *ret=malloc(sizeof(Trie));
    memset(ret->children,0,sizeof(ret->children));
    ret->end=0;
    return ret;
}

void trieInsert(Trie* obj, char* word) {
    int len =strlen(word);
    for(int i=0;i<len;i++){
        if(obj->children[word[i]-'a']!=0){
            obj=obj->children[word[i]-'a'];
        }
        else{
            obj->children[word[i]-'a'] =trieCreate();
            obj=obj->children[word[i]-'a'];
        }
    }
    obj->end=1;
}

bool trieSearch(Trie* obj, char* word) {
    int len=strlen(word);
    for(int i=0;i<len;i++){
        if(obj->children[word[i]-'a']==0){
            return false;
        }
        else{
            obj=obj->children[word[i]-'a'];
        }
    }
    if(obj->end){
        return true;
    }
    else{
        return false;
    }
}

bool trieStartsWith(Trie* obj, char* prefix) {
    int len=strlen(prefix);
    for(int i=0;i<len;i++){
        if(obj->children[prefix[i]-'a']==0){
            return false;
        }
        else{
            obj=obj->children[prefix[i]-'a'];
        }
    }
    return true;
}

void trieFree(Trie* obj) {
    for (int i = 0; i < 26; i++) {
        if (obj->children[i]) {
            trieFree(obj->children[i]);
        }
    }
    free(obj);
}


/**
 * Your Trie struct will be instantiated and called as such:
 * Trie* obj = trieCreate();
 * trieInsert(obj, word);
 
 * bool param_2 = trieSearch(obj, word);
 
 * bool param_3 = trieStartsWith(obj, prefix);
 
 * trieFree(obj);
*/
