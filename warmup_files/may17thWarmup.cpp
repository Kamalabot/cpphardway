#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

struct Ai_model{
    /*
    struct of ai models parameters
    enums of ai models
    classes of ai models 
    getting and setting model parameters
    */
    string name;
    string path;
    int size;
    void loadmodel(){
        cout << "loading model" << endl;
        (loaded) ? loaded = true : loaded = false;
    };
    bool modelstatus(){
        return loaded;
    };
    private:  // private 
        bool loaded;

};

class Sotamodel{
    string loaded; // private attr
    public:
        string name;
        string path;
        Sotamodel(string modname, string modpath){
            this->name = modname;
            this->path = modpath;
        };
        void setloaded(string load){
            this->loaded = load;
        };
        string getloaded(){
            return this->loaded;
        };
};

enum Models {gpt=568, gemma=750, llama=234, llava=321};
enum Orgs {Google, Openai, Anthropic, Neo4j};

int main(){
    // Ai_model gpt;
    // gpt.name = "gpt-3.5";
    // gpt.path = "openai/gpt-3.5";
    // gpt.size = 178000;
    // gpt.loadmodel();
    // cout << gpt.modelstatus() << endl;
    // cout << "working with classes" << endl; 

    Sotamodel gemma("gemma", "google");
    gemma.setloaded("loaded_cpu");
    cout << gemma.getloaded() << endl;

    cout << "Working with Enums" << endl;

    cout << "Accessing Models: " << Models::gemma << endl; 
    cout << "Accessing Orgs: " << Orgs::Anthropic << endl; 
    int company;
    cout << "Give a company number {Google=0, Openai=1, Anthropic=2, Neo4j=3}" << endl;
    cin >> company;

    switch (company)
    {
    case Google: cout << "Selected Google\n"; 
                break;
    case Openai: cout << "Selected OpenAi\n"; 
                break;
    case Anthropic: cout << "Selected Anthropic\n"; 
                break;
    case Neo4j: cout << "Selected Neo4j\n"; 
                break;
    default: cout << "No such org";
            break;
    }
}