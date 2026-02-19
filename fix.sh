#/bin/sh
git clone $1 $2
rm -rf $2/.git
git add .
git commit -m "$2"
git push