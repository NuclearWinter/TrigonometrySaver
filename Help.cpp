#include <iostream>

using namespace std;

void help (char section) {
    char helpPages;

    if (section == 'm') {
        cout << "To use this program you first need to convert any radians into degrees"
                " (You can do this with my converter tool).\n"
        << "This program works by either giving you all functions associated with a degree or by"
                " inverting a functions result and than returning the other functions\n"
        << "Because of this do not input sin/cos/etc. On the input line unless you are dealing with the result "
                "of a function\n"
        << "For possible functions please enter f, otherwise enter anything to continue\n";
    } else if (section == 'f') {
        cout << "Possible functions are: \n"
        << "d: (Angle in degrees)"
        << "asin: (Inverse sine result)\n"
        << "acos: (Inverse cosine result)\n"
        << "atan: (Inverse tangent result)\n"
        << "For the main help page please enter m, otherwise enter anything to continue\n";
    }
    cin >> helpPages;

    if (helpPages == 'f') {
        help('f');
    } else if (helpPages == 'm') {
        help('m');
    }
}
