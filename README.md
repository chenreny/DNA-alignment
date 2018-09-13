# DNA-alignment

Aiming to optimize high-noise single-molecule sequencing software like Canu, Kraken and Nanopolish

## Getting Started

These instructions will get you a copy of the project up and running on your local machine for development and testing purposes. See deployment for notes on how to deploy the project on a live system.

### Prerequisites

What things you need to install the software 

```
Working Terminal
```

### Installing

Type the following command line in terminal
```
g++ -g -O2 -c -o murmur3.o murmur3.c
g++ -g -O2 -std=c++11 -c -o main.o main.cpp
g++ -g -O2 -std=c++11 -c -o helper.o helper.cpp
g++ -lz main.o helper.o murmur3.o -o main

```

And then type:
(make sure the InputFile is under the same directory)

```
./main <InputFileName > outPutFileName
```



## Reference
See the pdf files included above:
<br>Canu_ scalable and accurate long-read assembly via adaptive k-mer weighting and repeat separation.pdf
<br>Kraken.pdf
<br>minimizer.pdf



