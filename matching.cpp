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

   unsigned int i = 0;

   ofstream file_out("3mod_envelope.analysis.txt");

	string str = "";
	
   while(i<max-2)
   {
	   string atg = "";

		if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'T' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Met\">ATG</span>";

			str += atg;

			i+3;
		}

		if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'C' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Ala\">GCU</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'C' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"Ala\">GCC</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'C' && code.c_str()[i+2] == 'A')
		{
			atg = "<span class=\"Ala\">GCA</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'C' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Ala\">GCG</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'G' && code.c_str()[i+2] == 'A')
		{
			atg = "<span class=\"Arg\">AGA</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'G' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Arg\">AGG</span>";

			str += atg;

			i+3;
		}

	   	
	   	
	   	
	   	
	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'G' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Asn\">CGU</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'G' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"Asn\">CGC</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'G' && code.c_str()[i+2] == 'A')
		{
			atg = "<span class=\"Asn\">CGA</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'G' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Asn\">CGG</span>";

			str += atg;

			i+3;
		}

	   	
	   	
	   	

	   	if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Asp\">AAU</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"Asp\">AAC</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Asp\">GAU</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"Asp\">GAC</span>";

			str += atg;

			i+3;
		}

	   	
	   	
	   	
	   	if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'G' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Csy\">UGU</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'G' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"Csy\">UGC</span>";

			str += atg;

			i+3;
		}

	   	
	   	
	   	
	   	
	   	
	   	
	   	if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'A')
		{
			atg = "<span class=\"Glu\">GAA</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Glu\">GAG</span>";

			str += atg;

			i+3;
		}

	   	
	   	
	   	
	   	
	   	
	   	
	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'A')
		{
			atg = "<span class=\"Gln\">CAA</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Gln\">CAG</span>";

			str += atg;

			i+3;
		}

	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Gly\">GGU</span>";

			str += atg;

			i+3;
		}
	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Gly\">GGC</span>";

			str += atg;

			i+3;
		}
	   	
	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Gly\">GGA</span>";

			str += atg;

			i+3;
		}

	    if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'G' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Gly\">GGG</span>";

			str += atg;

			i+3;
		}

	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	   	
	    if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"His\">CAU</span>";

			str += atg;

			i+3;
		}
	   	
	    if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"His\">CAC</span>";

			str += atg;

			i+3;
		}


	   	
	   	
	   	
	   	
	   	
	   	
	    if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Ile\">AUU</span>";

			str += atg;

			i+3;
		}

	    if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"Ile\">AUC</span>";

			str += atg;

			i+3;
		}

	    if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'A')
		{
			atg = "<span class=\"Ile\">AUA</span>";

			str += atg;

			i+3;
		}

	   	
	   	
	   	
	   	
	   	
	   	
	    if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'A')
		{
			atg = "<span class=\"Leu\">UUA</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Leu\">UUG</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Leu\">CUU</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"Leu\">CUC</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'A')
		{
			atg = "<span class=\"Leu\">CUA</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'C' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Leu\">CUG</span>";

			str += atg;

			i+3;
		}


	   	
	   	
	   	
	   	if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'A')
		{
			atg = "<span class=\"Lys\">AAA</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Lys\">GGG</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Phe\">UUU</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"Phe\">UUC</span>";

			str += atg;

			i+3;
		}

	   	
	   	
	   	if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'S' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Ser\">USU</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'C' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"Ser\">UCC</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'C' && code.c_str()[i+2] == 'A')
		{
			atg = "<span class=\"Ser\">UCA</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'C' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Ser\">UCG</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'G' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Ser\">AGU</span>";

			str += atg;

			i+3;
		}

	   	if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'G' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"Ser\">AGC</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'G' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Trp\">UGG</span>";

			str += atg;

			i+3;
		}



	   	
	   	if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Tyr\">UAU</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'U' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"Tyr\">UAC</span>";

			str += atg;

			i+3;
		}



	   	
	   	
	   	
	   	
	   	
		if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Val\">GUU</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'C' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Val\">GCU</span>";

			str += atg;

			i+3;
		}

		if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'A' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Val\">GAU</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'G' && code.c_str()[i+1] == 'U' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Val\">GUG</span>";

			str += atg;

			i+3;
		}



	   	
	   	
	   	
	   	
		if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'C' && code.c_str()[i+2] == 'U')
		{
			atg = "<span class=\"Tyr\">ACU</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'C' && code.c_str()[i+2] == 'C')
		{
			atg = "<span class=\"Tyr\">ACC</span>";

			str += atg;

			i+3;
		}


		if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'C' && code.c_str()[i+2] == 'A')
		{
			atg = "<span class=\"Tyr\">ACA</span>";

			str += atg;

			i+3;
		}


	   	if(code.c_str()[i] == 'A' && code.c_str()[i+1] == 'C' && code.c_str()[i+2] == 'G')
		{
			atg = "<span class=\"Tyr\">ACG</span>";

			str += atg;

			i+3;
		}



   	i++;
   }

   file_out << str << endl;
	
   file_out.close();

   return 0;
}
