#include<iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char** argv)
{
	int test_case;
	int T;
	
	cin>>T;

	for(test_case = 1; test_case <= T; ++test_case){
		string input, fast;
        cin>>input>>fast;
		int ans=0, len = fast.length();
        
        for(int i=0; i<input.length();i++){
			if(input[i]==fast[0]){
            	if (input.compare(i, len, fast)==0)
                    i+=len-1;
            }
            ans++;
        }
        
		cout<<"#"<<test_case<<" "<<ans<<endl;
	}
	return 0;//��������� �ݵ�� 0�� �����ؾ��մϴ�.
}