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
    cout << "Masukkan Banyak kata yang ingin dicari : ";
    cin>>n;
    for (int i=0;i<n;i++){
        cin.ignore();
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
