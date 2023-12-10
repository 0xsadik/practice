# !/bin/bash

while true; do
    git add .
    git commit -m '.'
    git push
    sleep 50
done


# to meake it executable i can give 2 command
# chmod -x 'filename'
# chmod u+x 'file anme'
