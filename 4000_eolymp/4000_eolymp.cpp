#include <iostream>
#include <vector>
using namespace std;

int dfs(const int &v, vector<bool> &used, vector <vector<int>> &vec, int &counter) {
	used[v] = true;
	++counter;
	for (int i = 0; i < used.size(); ++i) {
		if (vec[v][i] && !used[i]) dfs(i, used, vec, counter);
	}
	return counter;
}

int main()
{
	int vertices, vertex_x;
	cin >> vertices >> vertex_x;
	vector <vector<int>> v(vertices);
	for (int i = 0; i < vertices; ++i) {
		vector<int> vv(vertices);
		v[i] = vv;
		for (int j = 0; j < vertices; ++j) {
			cin >> v[i][j];
		}
	}
	int counter = 0;
	vector<bool> used(vertices, 0);
	cout << dfs(vertex_x - 1, used, v, counter);
	return 0;
}


