template<class T>
class vector{
private:
	T * vet;
	int logic;
	int Rsize;

	bool full();
	void change();
public:
	vector();
	~vector();
	bool empty();
	void push_back(T val);
	void pop_back();
	int size();
	T& operator[](int index);
};

template<class T>
bool vector<T>::full(){
	return (this->logic == this->Rsize);
}

template<class T>
void vector<T>::change(){
	int newSize = this->Rsize << 1;
	newSize++;

	T * aux = new T[newSize];

	for(int i=0;i<this->logic;i++) aux[i] = this->vet[i];
	

	delete[] this->vet;

	this->vet = aux;
	this->Rsize = newSize;
}

template<class T>
vector<T>::vector(){
	this->vet = nullptr;
	this->logic = 0;
	this->Rsize = 0;
}

template<class T>
vector<T>::~vector(){
	delete[] this->vet;
	this->logic = 0;
	this->Rsize = 0;
}

template<class T>
bool vector<T>::empty(){
	return (this->logic == 0);
}

template<class T>
void vector<T>::push_back(T val){
	if(this->full()){
		this->change();
	}

	this->vet[this->logic] = val;
	this->logic++;
}

template<class T>
void vector<T>::pop_back(){
	this->logic--;
}

template<class T>
int vector<T>::size(){
	return (this->logic);
}

template<class T>
T& vector<T>::operator[](int index){
	return this->vet[index];
}