#pragma once
class someclass
{
public:
	someclass(int*, size_t);
	~someclass();
	void setLength(int);
	unsigned int getLength();
	const char* resulCalc();
protected:
	int calcMidleValue();
	int calcSumOfValue();
private:
	int* mas;
	size_t length{ 1 };
	void resize(size_t);

};
