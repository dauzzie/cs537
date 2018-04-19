#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "mapreduce.h"

int main(int argc, char*argv[]) {



}

map(String key, String value):
    // key: document name
    // value: document contents
    for each word w in value:
        EmitIntermediate(w, "1");

reduce(String key, Iterator values):
    // key: a word
    // values: a list of counts
    int result = 0;
    for each v in values:
        result += ParseInt(v);
    print key, result;


