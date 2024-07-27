
#include "Span.hpp"


Span::Span():N(0){}

Span::Span(unsigned int N):N(N){}

Span& Span::operator=(const Span &instance){
	this->N = instance.N;
	return(*this);
}

Span:: ~Span(){}

void Span::printSpan(){

	if (this->N != 0){
		for (unsigned int i = 0; i < this->N; i++)
			std::cout << this->span[i] << " ";
	}
}

void Span::addNumber(int n){
	if (span.size() < this->N)
		span.push_back(n);
	else
		throw maxN();
}

int Span::longestSpan(){
	// std::sort(this->span.begin(), this->span.end());
	
	std::cout << "\n span sort :";
	// printSpan();
	// return this->span[1] - this->span[0];
	std::vector<int>::iterator itMin = std::min_element(this->span.begin(), this->span.end());
	std::vector<int>::iterator itMax = std::max_element(this->span.begin(), this->span.end());
	return (*itMax - *itMin);
}