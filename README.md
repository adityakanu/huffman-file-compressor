# huffman-file-compressor
A file compressor using huffman 


# How to run this?


## For compressing: 
```g++ encode.cpp huffman.cpp -o main```
```./main inputFile.txt compressedFile.huf```


## For decompressing:
```g++ decode.cpp huffman.cpp -o main```
```./main compressedFile.huf outputFile.txt```
