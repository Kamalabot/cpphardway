#include <iostream>
#include <vector>
#include <istream>
#include <string>
#include <math.h>
#include <fstream>

using namespace std;

double average(vector<double> responses);
double std_dev(vector<double> responses);
void print_resp(vector<double> responses);

int main(){
    vector<double> responsetimes;
    // initialize the DS for response_times 
    // string data;
    string filename;
    cout << "If you have file name with data, enter the same: ";
    getline(cin, filename);
    if (filename == "no" || filename == "NO"){
        cout << "Okay... Lets continue";
        double temp;
        while (true){
            cout << "Provide the response time of the server...";
            cin >> temp;
            if (cin.fail()){
                // if string is entered instead of numbers, cin will fail.
                cin.clear();
                break;
            } 
            // after getting the input double push it to the vector
            responsetimes.push_back(temp);
        }
    } else {
        cout << "Extracted data from the file." << endl;
        ifstream datafile(filename); // this line won't complain if there is no file to read...
        string resp_line;
        while(getline(datafile, resp_line)){
            // while there are lines, continue extracting and pushing them into
            // the vector
            cout << resp_line << endl;
            responsetimes.push_back(stod(resp_line));
        }
    }

    print_resp(responsetimes);
    double resp_avg = average(responsetimes);
    cout << "The average response time is: " << resp_avg << endl;
    double std_dev_resp = std_dev(responsetimes);
    cout << "The standard dev response time is: " << std_dev_resp << endl;
}

double average(vector<double> responses){
    double sum_vec = 0;
    for(int i = 0; i < responses.size(); i++){
        sum_vec += responses[i];
    }
    return sum_vec / responses.size();
}

void print_resp(vector<double> responses){
    for(int i = 0; i < responses.size(); i++){
        cout << responses[i] << endl;
    }

}

double std_dev(vector<double> responses){
    double avg_val = average(responses);
    double sum_sqr = 0;
    for (int i = 0; i < responses.size(); i++){
        double sqr_val = pow((responses[i] - avg_val), 2);
        sum_sqr += sqr_val;
    } 
    double std_dev_val = sqrt(sum_sqr / responses.size());
    return std_dev_val;
}