#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define int long long
#define endl '\n'
#define all(x) x.begin(), x.end()
#define pb push_back
#define mp make_pair
#define fi first    
#define se second
#define vi vector<int>
#define vvi vector<vector<int>>
#define pii pair<int, int>
#define vpii vector<pair<int, int>>
#define mii map<int, int>
#define msi map<string, int>
#define msii map<int, string>
#define umii unordered_map<int, int>
#define usi unordered_set<int>

vector<vector<int>> Paths;

class Solution {
public:
    void removeDuplicates(vector<int>& a){
        unordered_map<int, int> mp;
        for(int i = 0;i < a.size();i++){
            if(mp[a[i]]){
                a.erase(a.begin()+i);
                i--;
            }
            else{
                mp[a[i]] = 1;
            }
        }
    }
    int pathFill(vector<vector<int>> edges){
        for(int i = 0;i < edges.size();i++){
            if(edges[i][0] != edges[i][1])Paths.push_back(edges[i]);
        }
        for(int i = 0; i < Paths.size(); i++){
            
                vector<int> remove;
                for(int j = 0;j < edges.size();j++){
                    if(Paths[i][(((Paths[i]).size())-1)] == edges[j][0]){
                        for(int k = 0;k < Paths[i].size()-1;k++){
                            if(Paths[i][k] == edges[j][0]){return -1;}
                        }
                        Paths[i].push_back(edges[j][1]);
                        Paths.push_back(Paths[i]);
                        Paths[i].pop_back();
                        remove.push_back(i);
                    }
                }
                if(remove.size()){i--;}
                //     vector<int> a;
                //     a.push_back(edges[i][0]);
                //     a.push_back(edges[i][1]);
                //     Paths.push_back(a);
                // }
                removeDuplicates(remove);
                for(auto j : remove)
                    Paths.erase(Paths.begin() + j);
        }
        return 0;
        
    } 
    void clear(vector<vector<int>>& a){
        {a.erase(a.begin(), a.end());}
    }
    int largestPathValue(string colors, vector<vector<int>>& edges) {
        if(colors.size() == 1 && edges.size() == 0)return 1;
        clear(Paths);
        // sort(edges.begin(), edges.end());
        if(pathFill(edges) == -1)return -1;
        int max = -1;
        for(int i = 0;i < Paths.size(); i++){
            unordered_map<int, int> mp;
            for(int j = 0;j < Paths[i].size(); j++){
                // cout << Paths[i][j] << " ";
                mp[colors[Paths[i][j]]]++;
            }
            for(int j = 0;j < Paths[i].size();j++){
                if(mp[colors[Paths[i][j]]] > max){max = mp[colors[Paths[i][j]]];}
            }
        // cout << " \n";
        }
        return max ;
    }
};



void Parse(string line, vector<int>& a, vector<int>& b) {
    // stringstream ss(line);
    // string item
    // cout << "\n\nParsing line: " << line << endl;
    string s = "";
    int num = 0;
        for(int i = 0; i < line.size(); i++){
            char c = line[i];
            // cout << i << "  " << c << " \n";
            if(c == '[' || c == ']' || c == ',') {
                if(s.size()){a.pb(num);num = 0;s = "";}
            }else{
                num = num*10 + c - '0';
                s+= c;
            }
        }
}



int32_t main()
{

    string s;
    cin >> s;
    vi a, b;
    int t = 4;
    int a1, b1;
    // while(t--){
    //     cin >> a1 >> b1;
    //     a.pb(a1);
    //     b.pb(b1);
    // }
    string line;
    cin >> line;
    // cout << endl << endl << line << endl;
    Parse(line, a, b);
    for(int i = 0; i < a.size(); i++){
        // cout << a[i] << " ";
    }

    vvi edges;
    for(int i = 0; i < a.size(); i+=2){
        edges.pb({a[i], a[i+1]});
        // cout << edges[i/2][0] << " " << edges[i/2][1] << endl;
    }
    Solution sol;
    int ans = sol.largestPathValue(s, edges);
    cout << endl << endl << ans << endl;
    return 0;
}



// [[0,1],[1,2],[2,3],[3,4],[4,5],[3,5],[2,6],[5,7],[6,8],[7,8],[4,9],[8,9],[7,9],[9,10],[8,10],[5,10],[9,11],[10,12],[11,12],[9,12],[12,13],[10,13],[11,13],[8,14],[13,14],[12,14],[14,15],[13,15],[11,15],[10,16],[13,17],[10,17],[12,17],[15,17],[8,18],[17,18],[10,18],[14,19],[10,19],[18,19],[14,20],[18,20],[16,20],[19,20],[20,21],[18,21],[16,22],[21,22],[20,22],[14,23],[22,23],[21,23],[20,23],[18,24],[16,24],[22,24],[21,24],[18,25],[22,25],[21,25],[24,25],[20,25],[25,26],[25,27],[25,28],[27,29],[22,29],[28,29],[23,29],[28,30],[24,31],[28,31],[27,31],[29,32],[28,32],[30,32]]