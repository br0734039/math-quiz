#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

/*

This is code that is mean to generate a random sentence, it uses the rand fuction to randomly select words from a given set of arrays and outputs a sentence based on these words into a sequence of adjectives and nouns etc.

*/

int main()
{
    srand(time(0));

    string noun[10] = {"bird", "clock", "boy", "plastic", "duck", "teacher", "old lady", "professor", "hamster", "dog"};
    string verb[10] = {"farted", "ran", "flew", "dodged", "sliced", "rolled", "died", "breathed", "slept", "killed"};
    string adjective[10] = {"beautiful", "lazy", "professional", "lovely", "dumb", "rough", "soft", "hot", "vibrating", "slimy"};
    string adverbs[10] = {"slowly", "elegantly", "precisely", "quickly", "sadly", "humbly", "proudly", "shockingly", "calmly", "passionately"};
    string preposition[10] = {"down", "into", "up", "on", "upon", "below", "above", "through", "across", "towards"};

    cout << "The " << adjective [rand() % 10] << " " << noun[rand() % 10] << " " << adverbs[rand() % 10] << " " << verb[rand() % 10] << " because some " << noun[rand() % 10] << " " << adverbs[rand() % 10] << " " << verb[rand() % 10] << " " << preposition[rand() % 10] << " a " << adjective[rand() % 10] << " " << noun[rand() % 10] << ", which became a " << adjective[rand() % 10] << ", " << adjective[rand() % 10] << " " << noun[rand() % 10] << ".";

    return 0;
}
