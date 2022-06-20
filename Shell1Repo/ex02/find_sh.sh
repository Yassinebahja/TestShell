#!/bin/sh
find . -type f | grep '.sh$' | sed 's/.sh$//' | sed 's/.*\///'

