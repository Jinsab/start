#include <iostream>

using namespace std;
void quicksort(int low, int high, int s[]); 
void partition(int low, int high, int& pivotpoint, int s[]); 

int main() 
{
	int s[1000]={0};
	int low, high;
	int i, n; cout << ""
	<< endl; cin >> n; while(n<0 || n>1000)
	{ // ������ ���� ���ö� ���� �ݺ�
	cout << "���Է�"<<endl; cin >> n;
	}
	for(i=0; i<n; i++)
	// ������ �� �Է�
	cin >> s[i]; low=0; high=n-1; for(i=0; i<n; i++)
	/*{ // �Էµ� �� ��� 
	cout << s[i] << " ";
	}*/
	quicksort(low, high, s); cout << endl << endl; 
	for(i=0; i<n; i++)
	{ 
	// ���ĵ� �Էµ� ��� 
	cout << s[i] << " "; 
	}
	
	return 0;
} 
	
	
	void quicksort(int low, int high, int s[]) 
	{ 
	int pivotpoint; if(high > low)
	{ 
	partition(low, high, pivotpoint, s); 
		quicksort(low, pivotpoint-1, s); 
		// ���ĵ��� ���� �迭�� ������ ��ȣ���Ѵ�. 
		quicksort(pivotpoint+1, high, s); 
		} 
	} 
	
	void partition(int low, int high, int& pivotpoint, int s[])
	{ 
	int i, j; int temp; int pivotitem; pivotitem = s[low]; j=low; 
	for(i=low+1; i<=high; i++) 
	if(s[i]<pivotitem)
	{ 
	// pibot���� [i]�� ���Ͽ� [j]���� ���� ��ȯ�Ѵ�. 
	j++; temp=s[i]; s[i]=s[j]; s[j]=temp; 
	} 
	pivotpoint=j; 
	// pibot���� [j]���� �ٲ��� [j]�� �ִ� ���� pibot�� ���� ���� �Ѵ�. 
	temp=s[low]; 
	s[low]=s[pivotpoint]; 
	s[pivotpoint]=temp; 
	}
