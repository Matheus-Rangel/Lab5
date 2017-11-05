#include <cmath>
#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;
#include <algorithm>
using std::find_if;
class is_prim{
public:
	bool operator()(int x) {
		int i = 2;
		while (i <= sqrt(x)){
			if(x % i == 0)
				return false;
			i++;
		}
		return true;
	}
};
template <typename TContainer>
void print_prim(const TContainer& collection){
	auto first = collection.begin();
	auto last = collection.end();
	cout<<"Numeros primos ["<<*first<<"-"<<*(last-1)<<"]: ";
	while (first != last){
		first = find_if (first, last, is_prim());
		if(first != last){
			cout<<*first<<" ";
			first++;
		}
	}
	cout<<endl;
}
int main(int argv, char **argc){
	if(argv != 2)
		return 1;
	int size = atoi(argc[1]);
	vector<int> v(size);
	int i = 0;
	while(i<size){
		v[i] = i + 1;
		i++;
	}
	print_prim(v);
}