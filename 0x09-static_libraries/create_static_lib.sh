#!/bin/bash
gcc -c *.c | find -name ".o" | ar rc liball.a 
