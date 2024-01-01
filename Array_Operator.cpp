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
                Array operator +(Array O)
                {
                    Array A;
                    for ( int i = 0; i < 5; i++)
                    {
                        A.arr[i]=this->arr[i]+O.arr[i];
                    }
                    return A;                         
                }
                Array operator +(int a)
                {
                    Array A;
                    for(int i=0;i<5;i++)
                    {
                        A.arr[i]=this->arr[i]+a;
                    } 
                    return A;
                }
                 void  operator +=(Array A)
                 {
                      for(int i=0;i<5;i++)
                      {
                         this->arr[i]+=A.arr[i];
                      }
                 }
                 void operator +=(int a)
                 {
                     for(int i=0;i<5;i++)
                      {
                         this->arr[i]+=a;
                      }
                 }
            friend Array operator +(int a,Array A);

};
   Array operator +(int a,Array A)
   {
        Array T;
       for(int i=0;i<5;i++)
       {
           T.arr[i]=a+A.arr[i];
       }
       return T;
   }