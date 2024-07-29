
#include "Span.hpp"
#include <iostream>

Span::Span():N(0){}

Span::Span(unsigned int N):N(N){}

Span::Span(const Span &instance){
	*this = instance;
}

Span& Span::operator=(const Span &instance){
	this->N = instance.N;
	return(*this);
}

Span:: ~Span(){}

void Span::printSpan(){

	if ((!(this->span.empty()))){
	std::cout << "Print Span : \" ";
		for (unsigned int i = 0; i < this->span.size(); i++)
			std::cout << this->span[i] << " ";
	std::cout<<"\" \n"<< std::endl;
	}
}
void Span::printSize(){
	std::cout << "Size = " << span.size()<< "\n" << std::endl;
}
void Span::addNumber(int n){
	if (span.size() < this->N)
	{
		span.push_back(n);
	}
	else
		throw maxN();
}

void Span::addNumbers(std::vector<int>::iterator begin, std::vector<int>::iterator end){
	for (std::vector<int>::iterator i = begin; i < end; i++)
		addNumber(*i);

}
int Span::shortestSpan(){
	if (this->span.size() > 1){
		std::vector<int> sorted = this->span;
		std::sort(sorted.begin(), sorted.end());
		int min = std::numeric_limits<int>::max();

		//printSpan();
		for (size_t i = 1; i < sorted.size(); i++)
		{
			if (sorted[i] - sorted[i - 1]  < min)
				min = sorted[i] - sorted[i - 1];
		}
		std::cout << "Short = ";
		return(min);
	}
	else
		throw minN();
}

int Span::longestSpan(){
	
	if (this->span.size() > 1){
	//printSpan();
	std::cout << "Long = ";
	std::vector<int>::iterator itMin = std::min_element(this->span.begin(), this->span.end());
	std::vector<int>::iterator itMax = std::max_element(this->span.begin(), this->span.end());
	return (*itMax - *itMin);
	}
	else
		throw minN();
}