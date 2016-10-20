#include<iostream>
#include<string>
#include<map>

using std::string;
using std::cin;
using std::cout;
using std::endl;
using std::map;

int main()
{
	map<string, size_t> word_count;
	string word;
	while (cin >> word) {
		++word_count[word];
	}

	for (const auto &w : word_count) {
		cout << w.first << " occurs " << w.second << endl;
	}

	return 0;
}
