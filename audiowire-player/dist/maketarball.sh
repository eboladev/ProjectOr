#!/bin/bash

name=clementine
version="1.1.1"
deb_dist="unstable"
root=$(cd "${0%/*}/.." && echo $PWD/${0##*/})
root=`dirname "$root"`
rootnoslash=`echo $root | sed "s/^\///"`

echo "Creating $name-$version.tar.gz..."

tar -czf $name-$version.tar.gz "$root" \
    --transform "s,^$rootnoslash,$name-$version," \
    --exclude-vcs \
    --exclude "$root/bin/*" \
    --exclude "$root/debian" \
    --exclude "$root/dist/*.tar.gz" \
    --exclude "$root/CMakeLists.txt.user"

echo "Also creating ${name}_${version}~${deb_dist}.orig.tar.gz..."
cp "$name-$version.tar.gz" "${name}_${version}~${deb_dist}.orig.tar.gz"

