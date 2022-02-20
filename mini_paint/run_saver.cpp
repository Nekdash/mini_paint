#include "Header.h"

void run_saver(vector<vector<char>> field, string filepath) {
	ofstream file, writer;
	string line;
	vector<char> line_vec;
    string filename = "result_operation_file.it";
	string folder = slicer(filepath, 0, itc_len(filepath) - 12);
	file.open(folder + filename);
	if (file.is_open()) {
		file << "";
	}
	else {
		error("Error: file write went wrong");
	}
	for (int i = 0; i < field.size(); i++) {
		line_vec = field[i];
		for (int j = 0; j < line_vec.size(); j++) {
			line += line_vec[j];
		}
		writer.open(folder + filename);
		if (file.is_open()) {
			writer << line << endl;
		}
		else {
			error("Error: failed to write the file");
		}
		file.close();
	}
	cout << "Completed saving" << endl;
}