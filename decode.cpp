#include <bits/stdc++.h>
#include "huffman.hpp"

using namespace std;

int main(int argc, char *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);


    if (argc != 3)
    {
        cout << "Failed to detect Files";
        exit(1);
    }

    huffman f(argv[1], argv[2]);
    f.decompress();
    cout << "Decompressed successfully" << endl;

    return 0;
}