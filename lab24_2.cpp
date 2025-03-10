#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

void printList(list<string> s)
{
	list<string>::iterator i;
	for (i = s.begin(); i != s.end(); i++)
	{
		cout << *i << " ";
	}
	cout << "\n";
}

int main()
{

	list<string> line_up;
	list<string>::iterator loc;

	line_up.push_back("Alice");
	line_up.push_back("Bob");

	loc = find(line_up.begin(), line_up.end(), "Bob");
	line_up.insert(loc, "Oscar");

	line_up.push_back("Luffy");
	line_up.push_back("Sanji");
	line_up.push_back("Nami");
	line_up.erase(line_up.begin(), next(line_up.begin(), 2));
	loc = find(line_up.begin(), line_up.end(), "Luffy");
	line_up.insert(next(loc), "Narutu");
	line_up.push_front("Prayath");
	loc = find(line_up.begin(), line_up.end(), "Prayath");
	line_up.insert(next(loc), "Tony");
	loc = find(line_up.begin(), line_up.end(), "Bob");
	line_up.erase(loc);
	line_up.erase(line_up.begin(), next(line_up.begin(), 3));

	printList(line_up);

	return 0;
}