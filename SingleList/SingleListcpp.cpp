#include "SingleList.h"

List::List() 
	: head(nullptr), size(0){}

List::~List()
{
	while (head)
	{
		auto next = std::move(head->next);
		head = std::move(next);
	}
}

void List::push_back(int data)
{
	head = std::unique_ptr<Node>(new Node{data, std::move(head) });
}

std::string List::toString()
{
	std::stringstream buffer;
	if (head != nullptr)
	{
		std::unique_ptr<Node> current(std::move(head));

	    buffer << current->data << ' ';
	}
	return buffer.str();
}