// 1. vector declaration
// 2. push_back()
// 3. insert() single element
// 4. insert() multiple elements
// 5. pop_back()
// 6. erase() single elements
// 7. erase() multiple elements
// 8. accessing the elements of the vector with []
// 9. accessing the elements of the vector with .at()
// 10. size()
// 11. front()
// 12. back()
// 13. clear()
// 14. empty()
// 15. swap()
// 16. sort() ascending
// 17. sort() descending
// 18. reverse()
// 19. iteration

#include <bits/stdc++.h>
using namespace std;

void print(vector <int> &vv){
	for(int i=0; i<vv.size(); i++){
		cout<< vv[i]<< " ";
	}
	cout<< "\n";
}

int main(){


	// 1. vector <any_data_type> vector_name --> declaration
	vector <int> vv;


	// 2. vv.push_back(x) --> inserts/appends x at the end of the vector
	int num= 10;
	for (int i=0; i<num; i++){
		vv.push_back(i);
	}
	print(vv);
	// vv= 0 1 2 3 4 5 6 7 8 9


	// 3. vv.insert(vv.begin()+index, x) --> inserts x at certain index
	vv.insert(vv.begin()+5, 100);
	print(vv);
	// vv= 0 1 2 3 4 100 5 6 7 8 9


	// 4. vv.insert(vv.begin()+index, t, x) --> inserts x t times from certain index
	vv.insert(vv.begin()+7, 3, 300);
	print(vv);
	// vv= 0 1 2 3 4 100 5 300 300 300 6 7 8 9


	// 5. vv.pop_back() --> removes the last element from the vector
	vv.pop_back();
	print(vv);
	// vv= 0 1 2 3 4 100 5 300 300 300 6 7 8 


	// 6. vv.erase(vv.begin()+ index) --> erases/ removes theh element at that index from the vector
	vv.erase(vv.begin()+10);
	print(vv);
	// vv= 0 1 2 3 4 100 5 300 300 300 7 8


	// 7. vv.erase(vv.begin()+index_1, vv.begin()+index_2) --> removes elemenets from index 1 to 2
	vv.erase(vv.begin()+4, vv.begin()+8);
	print(vv);
	// vv= 0 1 2 3 300 300 7 8 


	// 8. vv[index] --> accessing the element at certain index
	// 9. vv.at(index) --> accessing the element at certain index
	cout<< vv[6] << " " << vv.at(7) << endl;
	// 7 8


	// 10. vv.size() --> returns an integer number --> number of elements in that vector
	cout<< vv.size() << endl;
	// 8


	// 11. vv.front() --> returns the first element of that vector
	// 12. vv.back() --> returns the last element of that vector
	cout<< vv.front() << " " << vv.back() << endl;
	// 0 8


	// 13. vv.clear() --> makes vv.size()= 0, infact it clears the vector
	vv.clear();
	// vv= NULL


	// 14. vv.empty() --> returns a boolean value.
	// returns true if vv.size()==0, i.e. vv is empty
	// returns false if vv.size()>0, i.e. vv is non-empty
	vv.empty()? cout<< "Empty\n" : cout<< "Not Empty\n";
	// Empty


	// 15. swap(vector_1, vector_2) --> swaps two vector
	vector <int> vv1, vv2;
	for (int i=0; i<10; i++){
		vv1.push_back(i);
	}
	for (int i=10; i<20; i++){
		vv2.push_back(i);
	}
	print(vv1);
	// vv1= 0 1 2 3 4 5 6 7 8 9 
	print(vv2);
	// vv2= 10 11 12 13 14 15 16 17 18 19
	swap(vv1, vv2);
	print(vv1);
	// vv1= 10 11 12 13 14 15 16 17 18 19 
	print(vv2);
	// vv2= 0 1 2 3 4 5 6 7 8 9


	// 16. sort(vv.begin(), vv.end()) --> sorts the vector in ascending order
	vector <int> v1;
	for(int i=0; i<5; i++){
		v1.push_back(rand());
	}
	print(v1);
	// v1= 41 18467 6334 26500 19169 
	sort(v1.begin(), v1.end());
	print(v1);
	// v1= 41 6334 18467 19169 26500
	

	// 17. sort(vv.begin(), vv.end(), greater <int> ()) --> sorts the vector in descending order
	vector <int> v2;
	for(int i=0; i<5; i++){
		v2.push_back(rand());
	}
	print(v2);
	// v2= 15724 11478 29358 26962 24464 
	sort(v2.begin(), v2.end(), greater <int> ());
	print(v2);
	// v2= 29358 26962 24464 15724 11478


	// 18. reverse(vv.begin(), vv.end()) --> reverses the vector
	vector <int> v3;
	for(int i=0; i<5; i++){
		v3.push_back(rand());
	}
	print(v3);
	// v3= 5705 28145 23281 16827 9961 
	reverse(v3.begin(), v3.end());
	print(v3);
	// v3= 9961 16827 23281 28145 5705


	// 19. iteration --> accessing the elements of the vector with iterators
	vector <int> v4;
	for(int i=0; i<5; i++){
		v4.push_back(rand());
	}

	vector <int> :: iterator it;
	for (it= v4.begin(); it<v4.end(); it++){
		cout<< *it<< " ";
	}
	cout<<"\n";
	// v4= 491 2995 11942 4827 5436

	
}
