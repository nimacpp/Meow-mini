#include <iostream>
#include <regex>
#include <string>
#include <fstream>

using namespace std;
string letters = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789/*-+~!@#$%^&*()_+";
string readfile(string name)
	{
    ifstream file(name.c_str());
    if(name.substr(name.find_last_of(".")+1) == "Meow") {

    if(!file){
    	cout<<name<<": No such file or directory "<<endl;
    	return "";
    }else{
    string line;
    string all = "";
    vector<string> rf;
    while (getline(file, line))
    {
        all = all + line;
        //all = all +"\"" +line + "\\n\"\n";

    }
    file.close();
    return all;
}
}
else
	cout<<name<<": The file format must be .Meow"<<endl;
	return "";

}
class Meow
{
public:

void help(){
	cout<<"[word] -> Number of repetitions "<<endl;
	for(int i=0;i<letters.length();i++){
		if(i%4==0){
			cout<<endl;
		}
		cout<<"["<<letters[i]<<"] -> "<<i+1<<"\t";
	}
}

string decode(string text){
	string rtn = "";int no; 
	for(auto a : split(text,",")){

		no = split(a,"Meow").size()-2;

		rtn = rtn+letters[no];

	}
 return rtn;
}
string encode(string text){
	string rtn = "";int no;
	//cout<<text.length()<<endl;
	for(int i=0;i<=text.length()+1;i++){
		for(int j=0;j<letters.length();j++){
			if(text[i] == letters[j]){
				//cout<<j<<text[i]<<endl;
				rtn = rtn + copy(j+1)+ ","; 
				break;
			}
		}
		//cout<<text[i]<<endl;
	}
	return rtn;
}
private:
	regex rg_code("Meow:([0-9]+)");
string copy(int re){
	string tr="";
	for(int i=0;i<re;i++){
		tr = tr+"Meow ";
	}
	return tr;
}
vector<string> split(string s, string delimiter)
{

    size_t pos_start = 0, pos_end, delim_len = delimiter.length();
    string token;
    vector<string> res;
    while ((pos_end = s.find(delimiter, pos_start)) != string::npos)
    {
        token = s.substr(pos_start, pos_end - pos_start);
        pos_start = pos_end + delim_len;
        res.push_back(token);
    }

    res.push_back(s.substr(pos_start));
    return res;
}

};



