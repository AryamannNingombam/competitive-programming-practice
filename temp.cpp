#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool solve(string &s, string &t, string &p)
{
	if (s == t)
		return true;
	if (s.size() > t.size())
		return false;

	unordered_map<char, int> s_map, t_map, p_map;
	for (auto &i : s)
		s_map[i]++;
	for (auto &i : t)
		t_map[i]++;
	for (auto &i : p)
		p_map[i]++;
	for (auto it = t_map.begin(); it != t_map.end(); it++)
	{
		if (s_map[it->first] > it->second)
			return false;
		if (s_map[it->first] + p_map[it->first] < it->second)
			return false;
	}
	return true;
}

int main()
{
	string s, t, p;
	cin >> s >> t >> p;
	cout << (solve(s, t, p) ? "YES" : "NO") << '\n';
	return 0;
}