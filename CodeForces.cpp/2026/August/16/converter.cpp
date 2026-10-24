#include<bits/stdc++.h>
using namespace std;

#define int long long


vector<vector<double>> graph;
vector<int> visited;

double find(int s, int t){
    if(s == t){
        return 1;
    }
    if(visited[s])return -1;
    visited[s] = 1;
    for(int i = 1;i < graph[s].size();i++){
        if(graph[s][i]){
            if(i == t){
                return graph[s][i];
            }
            double ratio = find(i, t);
            if(ratio != -1){
                return ratio * graph[s][i];
            }
        }
    }
    return -1;
}

int32_t main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;
    
    graph.resize(2 * n + 2, vector<double> (2 * n + 2));

    // inputs of (string float string) those are facts
    unordered_map<string, int> mp;
    vector<string> units;
    units.push_back("");
    for(int i = 0;i < n;i++){
        string s, t;
        float f;
        cin >> s;
        cin >> f;
        cin >> t;
        // 1 s = f t

        if(mp[s] == 0){
            units.push_back(s);
            mp[s] = units.size() - 1;
        }
        if(mp[t] == 0){
            units.push_back(t);
            mp[t] = units.size() - 1;
        }
        
        graph[mp[s]][mp[t]] = f;
        graph[mp[t]][mp[s]] = 1 / f;
    }

    

    for(int i = 0;i < q;i++){
        string s, t;
        double f;   
        cin >> f;
        cin >> s;
        cin >> t;

        visited.assign(2 * n + 2, 0);
        // f s = ? t
        // search in graph

        double x = find(mp[s], mp[t]);
        if(x == -1){
            cout << "No conversion possible for given facts from: " << s << " " << t << "\n";
        }
        else{
            cout << f * x << "\n";
        }
    }

    return 0;
}

// 4 3
// m 3.28 ft
// ft 12 in
// hr 60 min
// min 60 sec
// 2 m in
// 13 in m
// 13 in hr