/*
Nama Anggota:
1. Ahmad Al Farizi	2017051060
2. M Sultan Raisyah	2057051019
*/

#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;
const int cols = 16, rows = 15;

 char words[rows][cols] = {"tgbwwinterwsesn",
                            "aaunttmmhfoodnb",
                            "jlwcqldzmpmvdmr",
                            "asagmquwvvbsohi",
                            "bwplotanadtpgnc",
                            "rewngodjcpnatnk",
                            "eeotwosbqharrsa",
                            "azcgeswewnaknpb",
                            "dinnerqodlwdcar",
                            "onopkwmparktzcc",
                            "qbfrogmamwpweey",
                            "lqzqnnmrzjjsclg",
                            "mosgzczetdbooto",
                            "pdcrzmsngrdnrpz",
                            "ohnkzwaterjgtra"};

bool searchVertical(char *);
bool searchHorizontal(char *);

int main()
{
    char word[16];
    int n;
    cin>>n;
    cin.ignore();
    for (int i=0;i<n;i++){
        cin.getline(word,16,'\n');
        if (searchVertical(word) || searchHorizontal(word)){
            cout << "Ada\n";
        }
        else{
            cout << "Tidak Ada\n";
        }
    }
    return 0;
}

bool searchVertical(char *wordy){
	char word[16]; 
	for (int i=0; i<15; i++){
		for (int j=0; j<15; j++){
			word[j] = words[j][i];
		}
		if (strstr(word, wordy) != NULL){ 
			return true; 
		}
		else{
			reverse(word, word + strlen(word));
			if(strstr(word, wordy) != NULL){
				return true;
			}
		}
	}
	return false;
}

bool searchHorizontal(char *wordy){
	char word[15]; 
	for (int i = 0; i < 15; i++){
		if (strstr(words[i], wordy) != NULL){
			return true;
		}
    	for(int j = 0; j < 15; j++){
	    	word[j] = words[i][j];
		}
	    reverse(word, word + strlen(word));
	    if(strstr(word, wordy) != NULL){
	        return true;
	    }
    }	
	return false;
}
