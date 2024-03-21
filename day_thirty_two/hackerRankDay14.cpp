#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

	// Add your code here
    Difference(vector<int> _elem) {
        elements = _elem;
    }
    
    int computeDifference() {
        
        int max = elements[0];
        int min = elements[1];
        
        for (int i = 0; i < elements.size(); i++) {
            if (max < elements[i]) {
                max = elements[i];
            }
            if (min > elements[i]) {
                min = elements[i];
            }
        }
        maximumDifference = max - min;
    
        return maximumDifference;
    }
    

}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
