#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> GenerarVector(int n);
bool BuscaVal(vector <int> v , int val);
void MostrarVector(vector<int> A);

int main()
{
    vector<int> A;
    string msg="False";
    srand(time(NULL));
    int N=8, val;
    cout<<"Ingrese el numero buscar: ";
    cin>>val;
    A = GenerarVector(N);
    if (BuscaVal (A, val))
    {
    	msg="True";
	}
    MostrarVector(A);
    cout<<msg<<endl;
    return 0;
}

vector<int> GenerarVector(int n)
{
    vector<int> V;
    int e;
    for (int i = 0; i < n; i++)
    {
        e = rand() % 100;
        V.push_back(e);
    }
    return V;
}

bool BuscaVal(vector <int> v , int val)
{
    bool flag = false;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == val)
        {
        	flag = true;
		}
    }
    return flag;
}

void MostrarVector(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << "/";
    }
    cout << endl;
}
