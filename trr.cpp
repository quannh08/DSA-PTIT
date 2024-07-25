#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
using namespace std;

void readInput(const string& filename, int& t, int& n, vector<vector<int>>& adjMatrix, int& u) {
    ifstream infile(filename);
    infile >> t;
    if (t == 1) {
        infile >> n;
        adjMatrix.resize(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                infile >> adjMatrix[i][j];
            }
        }
    } else if (t == 2) {
        infile >> n >> u;
        u -= 1; // Convert to 0-based index
        adjMatrix.resize(n, vector<int>(n, 0));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                infile >> adjMatrix[i][j];
            }
        }
    }
    infile.close();
}

int checkEulerian(const vector<vector<int>>& adjMatrix, int n) {
    vector<int> inDegree(n, 0), outDegree(n, 0);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (adjMatrix[i][j] == 1) {
                outDegree[i]++;
                inDegree[j]++;
            }
        }
    }
    
    int startNodes = 0, endNodes = 0;
    for (int i = 0; i < n; ++i) {
        if (outDegree[i] - inDegree[i] > 1 || inDegree[i] - outDegree[i] > 1) {
            return 0;
        } else if (outDegree[i] - inDegree[i] == 1) {
            startNodes++;
        } else if (inDegree[i] - outDegree[i] == 1) {
            endNodes++;
        }
    }
    
    if (startNodes == 0 && endNodes == 0) {
        return 1; // Eulerian
    } else if (startNodes == 1 && endNodes == 1) {
        return 2; // Semi-Eulerian
    } else {
        return 0;
    }
}

void findEulerianPathOrCycle(const vector<vector<int>>& adjMatrix, int n, int start, vector<int>& result) {
    vector<vector<int>> graph = adjMatrix;
    stack<int> path;
    path.push(start);
    
    while (!path.empty()) {
        int v = path.top();
        bool found = false;
        for (int u = 0; u < n; ++u) {
            if (graph[v][u] > 0) {
                path.push(u);
                graph[v][u]--;
                found = true;
                break;
            }
        }
        if (!found) {
            result.push_back(v);
            path.pop();
        }
    }
    reverse(result.begin(), result.end());
}

void writeOutput(const string& filename, int resultType, const vector<int>& path) {
    ofstream outfile(filename);
    if (resultType == 0 || resultType == 1) {
        outfile << resultType;
    } else {
        for (size_t i = 0; i < path.size(); ++i) {
            if (i > 0) {
                outfile << " ";
            }
            outfile << (path[i] + 1); // Convert to 1-based index
        }
    }
    outfile.close();
}

int main() {
    int t, n, u = 0;
    vector<vector<int>> adjMatrix;
    readInput("CT.INP", t, n, adjMatrix, u);

    if (t == 1) {
        int result = checkEulerian(adjMatrix, n);
        writeOutput("CT.OUT", result, {});
    } else if (t == 2) {
        vector<int> path;
        findEulerianPathOrCycle(adjMatrix, n, u, path);
        writeOutput("CT.OUT", 2, path);
    }

    return 0;
}