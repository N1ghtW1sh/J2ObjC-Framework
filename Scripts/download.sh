#!/bin/bash
set -ev

j2objc_version=1.0.2
sha1_checksum=6f2f45b323ef92cc8d1b13dd789aebd1ab87562f

echo "fetching j2objc dist2"
curl -OL https://localhost/j2objc-${j2objc_version}.zip
echo "${sha1_checksum}  j2objc-${j2objc_version}.zip" | shasum -c
unzip -o -q j2objc-${j2objc_version}.zip
mv j2objc-${j2objc_version} Distributive
rm j2objc-${j2objc_version}.zip

echo "Creating framework"
mkdir Frameworks
mkdir Frameworks/j2objc.framework
cp -a Scripts/Template/* Frameworks/j2objc.framework/
cp Distributive/lib/libjre_emul.a Frameworks/j2objc.framework/j2objc
