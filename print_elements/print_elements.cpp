#include <iostream>
using std::cout;
using std::endl;
#include <algorithm>
#include <set>
template<typename TContainer>
void print_elements(const TContainer& collection, const char* label="",
const char separator=' '){
	cout<<label;
	auto first = collection.begin();
	auto last = collection.end();
	--last;
	while(first != last){
		cout<<*first<<separator; 
		++first;
	}
	++last;
	cout<<*last;
	cout<<endl;
}
int main() {
	std::set<int> numeros;
	numeros.insert(3);
	numeros.insert(1);
	numeros.insert(4);
	numeros.insert(1);
	numeros.insert(2);
	numeros.insert(5);
	print_elements(numeros, "Set: ");
 	print_elements(numeros, "CSV Set: ", ';');
	return 0;
}