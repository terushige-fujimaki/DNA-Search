#include <fstream>
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]){
    long max = 0;
    string code = "";

    ifstream reading_file;
    string filename = argv[1];
    reading_file.open(filename, ios::in);
    string reading_line_buffer;
    while(getline(reading_file, reading_line_buffer)){
	code += reading_line_buffer;
	max += strlen(reading_line_buffer.c_str());
    }

    int taa_count = 0;
    int tga_count = 0;
    int tag_count = 0;

   unsigned int i = 0;

   ofstream file_out("1.fa-new.sql");

   int cnt = 1;
   int cnt3 = 0;

   while(i<max-2)
   {
	   string atg = "";

	if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'T' && code.c_str()[i+2] == 'G')
	{
		atg = "<span class=\"Met\">ATG</span>";

		string str = atg;

		unsigned int j = i+3;

		while(j<max-2)
		{
			str += code.c_str()[j];

			if(code.c_str()[j] == 'T' && code.c_str()[j+1] == 'A' && code.c_str()[j+2] == 'A')
			{
				cout << "start = " << i << endl;
				cout << str << "TAA" << endl;

				file_out << str << endl;

				i = j+3;
				taa_count++;
				cnt++;
				if(strlen(str.c_str())%3 == 0)
					cnt3++;
					
				break;
			}
			else if(code.c_str()[j] == 'T' && code.c_str()[j+1] == 'G' && code.c_str()[j+2] == 'A')
			{
				file_out << str << endl;

				cout << str << "TGA" << endl;
				i = j+3;
				tga_count++;
				cnt++;
				if(strlen(str.c_str())%3 == 0)
					cnt3++;
				break;
			}
			else if(code.c_str()[j] == 'T' && code.c_str()[j+1] == 'A' && code.c_str()[j+2] == 'G')
			{
				file_out << str << endl;

				cout << str << "TAG" << endl;
				i = j+3;
				tag_count++;
				cnt++;
				if(strlen(str.c_str())%3 == 0)
					cnt3++;
				break;
			}


			j++;
		}
	}

	i++;
   }

   file_out.close();

   cout << "taa_count = " << taa_count << endl;
   cout << "tga_count = " << tga_count << endl;
   cout << "tag_count = " << tag_count << endl;
   cout << cnt3 << endl;

   //テスト

   return 0;
}
