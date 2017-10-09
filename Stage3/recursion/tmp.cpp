#include<iostream>  
#include<string>  
#include<cstring>  
using namespace std;  
int coun(int m, int n);  
int main(){  
        int m, n;  
	    while (1){  
		        cin >> m >> n;  
			        int res = coun(m, n);  
				        cout << res;  
					    }  
	        return 0;  
}  
int coun(int m, int n){  
        if (m == 0 || n == 1)  
	            return 1;  
	    if (n > m)  
		        return coun(m, m);  
	        else  
		            return coun(m, n - 1) + coun(m - n, n);  
}  
