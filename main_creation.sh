#!/bin/bash

for ((i=0; i<=$1; i++)); do
  touch "$i-main.c"
done