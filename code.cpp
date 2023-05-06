//#include <iostream>
//using namespace std;
//
//int main() {
//
//    int rows, count = 0, count1 = 0, k = 0;
//
//    cin >> rows;
//
//    for(int i = 1; i <= rows; ++i) {
//        for(int space = 1; space <= rows-i; ++space) {
//            cout << "  ";
//            ++count;
//        }
//
//        while(k != 2*i-1) {
//            if (count <= rows-1) {
//                cout << i+k << " ";
//                ++count;
//            }
//            else {
//                ++count1;
//                cout << i+k-2*count1 << " ";
//            }
//            ++k;
//        }
//        count1 = count = k = 0;
//
//        cout << endl;
//    }
//    return 0;
//}
//

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int bin=0;
//	while(n!=0){
//		int rem=n%2; 
//		bin=bin+rem*10;
//		n=n/10;
//	}
//	cout<<bin;
//	
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main()  {
//	int n,i,j,k;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n-i;j++){
//			cout<<" ";
//		}
//		for(k=1;k<=i;k++){
//			cout<<"*";
//		}
//		cout<<endl;
//	}
//	return 0;
//}


//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//       int i,j,k,n;
//       cin>>n;
//       for( i=1;i<=n;i++){
//       	  for(j=1;j<=n-i;j++){
//       	  	 cout<<" ";
//			 }
//
//		  for(k=1;k<=2*i-1;k++){
//		  	cout<<"*";
//		  }	 
//		  cout<<endl;
//	   }
//     return 0;
//}

//  down triangle
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n,i,j,k;
//	cin>>n;
//	for(i=0;i<=n;i++){
//		
//		for(k=i;k>0;k--){
//    	cout<<" ";
//	}
//		for(j=i;j<2*n-1-i;j++){
//			cout<<"*";
//		}
//    
//	
//		cout<<endl; 
//	}
//	return 0;
//}

// OR

//
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n,i,j,k;
//	cin>>n;
//	int temp=1;
//	for(i=n;i>0;i--){
//		for(j=1;j<temp;j++){
//			cout<<" ";
//		}
//		
//		for(k=1;k<=2*i-1;k++){
//			cout<<"*";
//		}
//		cout<<endl;
//		temp++;
//	}
//	return 0;
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n,i,j,k,l;
//	cin>>n;
//	for(i=1;i<=n;i++){
//		for(j=1;j<=n-i;j++){
//			cout<<"  ";
//		}
//		for(k=i;k<=2*i-1;k++){
//			cout<<k<<" ";
//		}
//		for(l=k-2;l>=i;l--){
//			cout<<l<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	char c,alfabet='A';
//	cin>>c;
//	char input=toupper(c);
//
//for(int i=0;i<=c-'A';i++){
//		for(int j=0;j<=i;j++){
//			cout<<alfabet;
//		}
//		alfabet++;
//		cout<<endl;
//	}
//	return 0;
//}
//

//
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n,i,j;
//	cin>>n;
//	for(i=n;i>=1;i--){
//		for(j=1;j<=i;j++){
//			 cout<<"* "; 
//		}
//		cout<<endl;
//	}
//}

//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	for(int i=n;i>=1;i--){
//		for(int j=1;j<=i;j++){
//			cout<<j<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}

//
//#include<bits/stdc++.h>
//using namespace std;
//int main(){
//	int n;
//	cin>>n;
//	int count =1;
//	for(int i=1;i<=n;++i){
//		for(int j=1;j<=i;++j){
//			cout<<count<<" ";
//			++count;
//		}
//		cout<<endl;
//	}
//	return 0;
//}
//


#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,k;
	cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<n-2*i;j++){
			cout<<" ";
		}
		for(k=1;k<=2*i-1;k++){
			cout<<"*";
		}
		cout<<endl;
		
	}
	return 0;
}
