class Solution {
public:
    unordered_map <char, char> parent;

    char findParent(char c){
      if(parent[c] == c) return c;
      return parent[c] = findParent(parent[c]);
    }

    void makeUnion(char c1, char c2){
      c1 = findParent(c1);
      c2 = findParent(c2);

      if(c1 < c2){
        parent[c2] = c1;
      } else{
        parent[c1] = c2;
      }
    }

    string smallestEquivalentString(string s1, string s2, string baseStr) {

        for(char c: baseStr) parent[c] = c;

        for(int i = 0; i < s1.length(); i++){
          parent[s1[i]] = s1[i];
          parent[s2[i]] = s2[i];
        }

        for(int i = 0; i < s1.length(); i++){
          makeUnion(s1[i], s2[i]);
        }

        string res = "";

        for(char c: baseStr) res.push_back(findParent(c));

        return res;
    }
};
