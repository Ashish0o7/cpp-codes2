Dynamic Memory Allocation in C++ :-

1) Memory Allocation will be performed at run time
2) It happens on memory heap
3) Performed using new operator in c++
e.g.
int *x = new int; //dynamic memory allocation
double *d = new double; //dynamic memory allocation
int *arr = new int[5]; //dynamic memory allocation


Static Memory Allocation in C++ :- It happens on memory stack

int main()
{
// int takes 4 bytes -> 4 bytes memory would be reserved
int x = 0; //static memory allocation

// 16 bytes memory would be reserved
int arr[] = {12,23,45,56}; //static memory allocation

cout<<"Enter a number : "<<endl;

cin >> x;
}