#include <iostream>

namespace first{
    int x = 5;
}

namespace second{
    int x = 57;
}

int main() {
    // Namespaces provide solution for name conflicts in big projects.
    // Each entity requires a unique name.
    // We can use commands inside the namespaces as shown below
    using std::cout;
    int x = 1;
    // int x = 5;  // will throw redeclaration error
    using namespace first;  // even if namespace is used, the current ns var is only used
    using namespace second;  // even if namespace is used, the current ns var is only used
    cout << "Got the namespace " << x << "\n";
    cout << "Got the first namespace x " << first::x << "\n";
    cout << "Got the second namespace x " << second::x << "\n";

    return 0;
}