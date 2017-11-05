#include <cmath> //fabs
#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;

template <typename InputIterator>
InputIterator closest2mean(InputIterator first, InputIterator last){
	auto media = *first;
	int i = 1;
	InputIterator temp = first + 1;
	while(temp != last){
		media += *temp; 
		++temp;
		++i;
	}
	temp = first;
	media /= i;
	InputIterator closest = first;
	while(temp != last){
		if(fabs(media - *temp) < fabs(media - *closest))
			closest = temp;
		++temp;
	}
	return closest;
}
int main() {
	vector<int> v { 50, 40, 30, 40, 50 };
	auto result = closest2mean(v.begin(), v.end());
	cout << (*result) << endl;
	return 0;
}