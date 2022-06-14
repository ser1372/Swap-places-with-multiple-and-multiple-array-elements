#include <iostream>
#include <ctime>


int main()
{
    int const SIZE = 9;
    int arr[SIZE];

    for(int i = 0; i < SIZE; i++)
    {   
        arr[i] = rand() % 9;

    }

    for(int i = 0; i < SIZE; i++)
    {   
        std::cout << "\t" <<arr[i];
    }

    int min_value = 0;
    int max_value = 0;

    for(int i = 0; i < SIZE;i++)
    {
        for(int j = 0; j < SIZE; j++)
        {
            
           if(i > j)
           {
             
             max_value = i;   

           }
           else if(max_value > i)
           {

            min_value = i;
             

           }

            

        }


    }


    std::swap(arr[max_value],arr[min_value]);

    for(int i = 0; i < SIZE; i++)
    {   

        std::cout <<"\t"<<"\n"<<arr[i];

    } 

    std::cout << " " <<"min_value is :" << min_value << "\t" <<"max_value is :" << max_value << std::endl;
    
    system("pause");

}