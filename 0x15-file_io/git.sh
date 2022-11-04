#!/bin/bash

git add .
echo "Input commit message"
read commitMessage
git commit -m "$commitMessage"
git push
