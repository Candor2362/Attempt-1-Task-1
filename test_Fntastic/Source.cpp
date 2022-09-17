#include <iostream>
#include <vector>

using namespace std;

string FormatString(const string& input)
{
	if (input.empty())
		return string();

	string output;

	//Searching from beginning of the string, then from it's end. If results converge - character is unique. If not - non-unique.
	for (int i = 0; i < input.length(); ++i)
	{
		if (input.find(tolower(input[i])) == input.rfind(tolower(input[i])))
			output.append("("); //Character is unique, therefore symbol '(' is added to the output string
		else
			output.append(")"); //Character is nonunique, therefore ')'
	}

	std::cout << "Input string: " << input << endl;
	std::cout << "Output string: " << output << endl;
	return output;
}

int main()
{
	string input_1("din");
	string input_2("recede");
	string input_3("Success");
	string input_4("(( @");

	string output_1 = FormatString(input_1);
	string output_2 = FormatString(input_2);
	string output_3 = FormatString(input_3);
	string output_4 = FormatString(input_4);

	return 0;
}
