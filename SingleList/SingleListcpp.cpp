#include "SingleList.h"

List::List() 
	: head(nullptr), size(0){}

List::List(const List& second)
{

}

List::~List()
{
	while (head != nullptr)
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
	auto current = std::move(head);
    while (current != nullptr)
	{
	    buffer << current->data << ' ';
		current = std::move(current->next);
	}
	return buffer.str();
}