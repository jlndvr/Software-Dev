class Extendable{
    private:
    // storage

    //int ar[50];
    int * ar;
    int memorySize;
    int count;


    public:
    Extendable(int s);//constructor
    ~Extendable();//destructor
    void insert(int value);// insertion
    // search operation:returns index of value
    int search(int value);
    int memSize();//return the size of the memory
    int size();//number of values stored
};