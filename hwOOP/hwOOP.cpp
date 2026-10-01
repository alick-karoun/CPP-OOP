//hw for 10th of september 2026
#include <iostream>

class Book {
	std::string title;
	int id;
	mutable int view_count; //allowing modification of view_count even in const objects
public:
	Book(std::string, int); 
	int getViewCount() const;

	void display() const;
};

Book::Book(std::string title, int id) : title(title), id(id), view_count(0) {};

int Book::getViewCount() const { return view_count; };

void Book::display() const {
	view_count++;
	std::cout << "ID: " << id << " Title: " << title << " Views: " << view_count << std::endl;
}

int main(){
	const Book book("best book ever fr", 101);

	book.display();
	book.display();
	book.display();

	std::cout << "Total views: " << book.getViewCount() << std::endl;
	return 0;
}
