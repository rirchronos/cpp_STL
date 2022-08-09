// 1.	list declaration
// 2. 	push_back()
// 3. 	push_front()
// 4.	advance()
// 5.	insert() single element
// 6. 	insert() multiple elements
// 7.	pop_back()
// 8.	pop_front()
// 9.	erase() single element
// 10.	erase() multiple elements
// 11. 	remove()
// 12.	accessing the elements of the list with iterator
// 13. 	size()
// 14. 	front()
// 15. 	back()
// 16. 	clear()
// 17. 	empty()
// 18. 	swap()
// 19.  swap() another way
// 20. 	sort() ascending
// 21. 	sort() descending
// 22. 	reverse()
// 23.	merge()

#include <bits/stdc++.h>
using namespace std;

void print(list <int> & ls){
	for( auto it : ls){
		cout<< it<< " ";
	}
	cout<< "\n";
}

int main(){


	// 1. list <any_data_type> list_name --> declaration
	list <int> ls;


	// 2. ls.push_back(x) --> inserts/appends x at the end of the list
	for (int i=0; i<10; i++){
		ls.push_back(i);
	}
	print(ls);	// ls= 0 1 2 3 4 5 6 7 8 9


	// 3. ls.push_front(x) --> inserts/appends x at the front of the vector
	for (int i=10; i<20; i++){
		ls.push_front(i);
	}
	print(ls);	// ls= 19 18 17 16 15 14 13 12 11 10 0 1 2 3 4 5 6 7 8 9


	// 4. (ls.begin()+index) --> doesn't work in list. We have to use advance() function
	list <int> :: iterator ii;
	ii= ls.begin();
	advance(ii, 8);	// now ii= (vv.begin()+8)


	// 5. ls.insert(iterator, x) --> inserts x at that iterator
	list <int> :: iterator it1= ls.begin();
	advance(it1, 5);
	ls.insert(it1, 100);
	print(ls);	// ls= 19 18 17 16 15 100 14 13 12 11 10 0 1 2 3 4 5 6 7 8 9


	// 6. ls.insert(iterator, t, x) --> inserts x t times from certain ierator
	list <int> :: iterator it2= ls.begin();
	advance(it2, 7);
	ls.insert(it2, 3, 300);
	print(ls);	// ls= 19 18 17 16 15 100 14 300 300 300 13 12 11 10 0 1 2 3 4 5 6 7 8 9 


	// 7. ls.pop_back() --> removes the last element from the list
	ls.pop_back();
	print(ls);	// ls= 19 18 17 16 15 100 14 300 300 300 13 12 11 10 0 1 2 3 4 5 6 7 8 


	// 8. ls.pop_front() --> removes the first element from the list
	ls.pop_front();
	print(ls);	// ls= 18 17 16 15 100 14 300 300 300 13 12 11 10 0 1 2 3 4 5 6 7 8 


	// 9. ls.erase(iterator) --> erases/ removes that element at that iterator 
	list <int> :: iterator it3= ls.begin();
	advance(it3, 10);
	ls.erase(it3);
	print(ls);	// ls= 18 17 16 15 100 14 300 300 300 13 11 10 0 1 2 3 4 5 6 7 8


	// 10. ls.erase(iterator_1, iterator_2) --> removes elemenets from iterator_1 to iterator_2
	list <int> :: iterator it4= ls.begin(), it5= ls.begin();
	advance(it4, 4);
	advance(it5, 8);
	ls.erase(it4, it5);
	print(ls);	// ls= 18 17 16 15 300 13 11 10 0 1 2 3 4 5 6 7 8 


	// 11. ls.remove(x) --> removes 'x' from the list if it exists
	ls.remove(300);
	print(ls);	// ls=  18 17 16 15 13 11 10 0 1 2 3 4 5 6 7 8 


	// 12. accessing the elements--> [] or .at() will not work on list. We can access the elements of the list using iterator
	list <int> :: iterator it;
	for (it=ls.begin(); it!= ls.end(); it++){
		cout<< *it << " ";
	}
	cout<< endl;	// ls= 18 17 16 15 13 11 10 0 1 2 3 4 5 6 7 8 


	// 13. ls.size() --> returns an integer number --> number of elements in that list
	cout<< ls.size() << endl;	// 16


	// 14. ls.front() --> returns the first element of that list
	// 15. ls.back() --> returns the last element of that list
	cout<< ls.front() << " " << ls.back() << endl;	// 18 8


	// 16. ls.clear() --> makes ls.size()= 0, infact it clears the list
	ls.clear();	// ls= NULL


	// 17. ls.empty() --> returns a boolean value.
	// returns true if ls.size()==0, i.e. ls is empty
	// returns false if ls.size()>0, i.e. ls is non-empty
	ls.empty()? cout<< "Empty\n" : cout<< "Not Empty\n";	// Empty


	// 18. swap(list_1, list2_2) --> swaps two lists
	// 19. list_1.swap(list_2) --> swaps two lists
	list <int> ls1, ls2;
	for (int i=00; i<10; i++)	ls1.push_back(i);
	for (int i=10; i<20; i++)	ls2.push_back(i);

	print(ls1);     // ls1= 0 1 2 3 4 5 6 7 8 9 
	print(ls2);     // ls2= 10 11 12 13 14 15 16 17 18 19

	swap(ls1, ls2);
	print(ls1);     // ls1= 10 11 12 13 14 15 16 17 18 19 
	print(ls2);     // ls2= 0 1 2 3 4 5 6 7 8 9

	ls1.swap(ls2);
	print(ls1);	// ls1= 0 1 2 3 4 5 6 7 8 9 
	print(ls2);	// ls2= 10 11 12 13 14 15 16 17 18 19 



	// 20. ls.sort() --> sorts the list in ascending order
	list <int> ls3;
	for (int i=00; i<5; i++)	ls3.push_back(rand());
	print(ls3);	// ls3= 41 18467 6334 26500 19169 

	ls3.sort();
	print(ls3);	// ls3= 41 6334 18467 19169 26500
	

	// 21. ls.sort(greater <int> ()) --> sorts the list in descending order
	list <int> ls4;
	for (int i=00; i<5; i++)	ls4.push_back(rand());
	print(ls4);	// ls4= 15724 11478 29358 26962 24464 

	ls4.sort(greater <int> ());
	print(ls4);	// ls4= 29358 26962 24464 15724 11478


	// 22. ls.reverse() --> reverses the list
	list <int> ls5;
	for (int i=00; i<5; i++)	ls5.push_back(rand());
	print(ls5);	// ls5= 5705 28145 23281 16827 9961 
	
	ls5.reverse();
	print(ls5);	// ls5= 9961 16827 23281 28145 5705


	// 23. list_1.merge(list_2) --> mergers two list and stores in list_1
	list <int> ls6, ls7;
	for (int i=00; i<5; i++)	ls6.push_back(rand());
	for (int i=5; i<10; i++)	ls7.push_back(rand());
	print(ls6); 	// ls6= 491 2995 11942 4827 5436 
	print(ls7);	// ls7= 32391 14604 3902 153 292 
	
	ls6.merge(ls7);
	print(ls6);	// ls6= 491 2995 11942 4827 5436 32391 14604 3902 153 292


}
