#include <iostream>
#include "vectormhco.hpp"
using namespace std;

int main(void){
	ios::sync_with_stdio(false);
	cin.tie(0);

	vector<int> t;

	if(t.empty()){
		for(int i=0;i<3;i++){
			t.push_back(i);
		}
	}

	t[2] = 5;

	t.push_back(6);
	t.push_back(7);
	t.pop_back();

	for(int i=0;i<t.size();i++){
		cout << t[i] << endl;
	}

	return 0;
}