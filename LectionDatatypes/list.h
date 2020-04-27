class list
{
public:
	
	list(double listValue, bool root = false);
	~list();
	list* ptrNextItem;
	list* addItem(double listValue);
	void deleteItem(list* lst);
	void showElements();
private:
	double listValue;
	bool root;
};

