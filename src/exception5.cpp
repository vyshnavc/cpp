#include"../inc/cpplib"
using namespace std;

int main(){

	int x[3] = {-1,2};

	for(int i=0; i<2; i++){
		int ex = x[i];
		try {
			if (ex > 0)
				throw ex;	// throwing numeric value as exception
			else
				throw 'e';     // throwing a character as exception
		} 
		catch (int ex){                 // to catch numeric exceptions
			cout << "Integer exception\n";
		} 
		catch (char ex){                // to catch character/string exceptions
			cout << "Character exception\n";
		}
	}
}
