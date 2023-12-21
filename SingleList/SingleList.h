#include <iostream>
#include <memory>
#include <sstream>

class List
{
private:
	struct Node
	{
		int data;
		std::unique_ptr<Node> next;
	};
	std::unique_ptr<Node> head;
	size_t size;

public:
	List();

	List(const List& second);

	~List();

	void push_back(int data);

	std::string toString();
};