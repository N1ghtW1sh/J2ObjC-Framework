#!/bin/bash
set -ev

j2objc_version=1.0.2
sha1_checksum=703d2a8d132f828a9dece35a0efc7cbdcef83e29

echo "fetching j2objc dist23"
curl -OL http://localhost/j2objc-${j2objc_version}.zip

unzip -o -q j2objc-${j2objc_version}.zip
mv j2objc-${j2objc_version} Distributive
rm j2objc-${j2objc_version}.zip

echo "Creating framework"
mkdir Frameworks
mkdir Frameworks/j2objc.framework
cp -a Scripts/Template/* Frameworks/j2objc.framework/
cp Distributive/lib/libjre_emul.a Frameworks/j2objc.framework/j2objc
