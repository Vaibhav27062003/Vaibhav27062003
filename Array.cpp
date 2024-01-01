    #include<iostream>

    using namespace std;

    class Array
    { 
        int arr[5];
        public:
                Array()
                {
                    for(int i=0;i<5;i++)
                    {
                        arr[i]=0;
                    }
                }
                Array(int arr1[5])
                {
                    for (int i = 0; i < 5; i++)
                    {
                        
                        this->arr[i]=arr1[i];  
                    }
                }
                Array(Array &A)
                {
                    for(int i=0;i<5;i++)
                {
                     this->arr[i]=A.arr[i];
                }
                }
                ~Array()
                {
                    //cout<<"destructor is called";
                }
                void readData()
                {
                    cout<<"Enter array 5 element:";
                    for(int i = 0; i < 5; i++)
                        {
                            cin>>arr[i];
                        }
                    cout<<endl;
                }
                void showData()
                {
                    cout<<"showing array element:";
                    for(int i=0;i<5;i++)
                    {
                        cout<<arr[i]<<"\t";
                    }
                }
                void add(Array X,Array Y)
                {
                    for(int i=0;i<5;i++)
                    {
                        this->arr[i]=X.arr[i]+Y.arr[i];
                    }
                }
                void add( Array Z,int a){
            
                    for(int i=0;i<5;i++)
                {
                    this->arr[i]=Z.arr[i]+a;
                }
                }
                void add(int b,Array X)
                {
                    for (int i = 0; i < 5; i++)
                    {
                        this->arr[i]=b+X.arr[i];
                    }
                    
                }
                void add(Array X)
                {
                    for (int i = 0; i < 5; i++)
                    {
                        this->arr[i]+=X.arr[i];
                    }
                    
                }
                void add(int a)
                {
                    for(int i=0;i<5;i++)
                    {
                        this->arr[i]+=a;
                    }
                }
};