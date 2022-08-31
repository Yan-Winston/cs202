// Conclusions from testing: both fluctuate a lot and most of the time recursive runs faster


#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

#define TERM 20
#define NUM_RUNS 10

long long int recursiveFact(int);
long long int iterativeFact(int);

int main(){
	long long int rFact, iFact;
	double rSum = 0, iSum = 0;
	int rNano[NUM_RUNS];
	int iNano[NUM_RUNS];

	for(int i = 0; i < NUM_RUNS; i++){
		auto iStart = steady_clock::now();
		iFact = iterativeFact(TERM);
		auto iEnd = steady_clock::now();
		iNano[i] = duration_cast<nanoseconds>(iEnd - iStart).count();
	}

	for(int i = 0; i < NUM_RUNS; i++){
		auto rStart = steady_clock::now();
		rFact = recursiveFact(TERM);
		auto rEnd = steady_clock::now();
		rNano[i] = duration_cast<nanoseconds>(rEnd - rStart).count();
	}

	cout << "RECURSIVE\t\tITERATIVE" << endl;
	rFact = recursiveFact(TERM);
	iFact = iterativeFact(TERM);
	cout << rFact << "\t" << iFact << endl;
	for(int i = 0; i < NUM_RUNS; i++){
		cout << rNano[i] << "\t\t\t" << iNano[i] << endl;
		rSum += rNano[i];
		iSum += iNano[i];
	}
	cout << "Average" << endl;
	cout << rSum / NUM_RUNS << "\t\t\t" << iSum / NUM_RUNS << endl;	

	return 0;
}

long long int recursiveFact(int term) {
	if (term == 1) {
		return 1;
	}
	return term*recursiveFact(term - 1);
}

long long int iterativeFact(int term){
	long long int product = 1;
	while(term > 0){
		product *= term--;
	}
	return product;
}