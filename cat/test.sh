#!/bin/sh

[ $# -ne 1 ] \
  && echo "$(basename $0) cat_version" \
  && exit 1

cat_version=$1
file=cat-${cat_version}
echo "gcc -Wall -std=c11 ${file}.c -o ${file}"
gcc -Wall -std=c11 ${file}.c -o ${file} \
  || exit 1

do_test() {
  test_name=$1
  shift
  sample_files="$@"
  (cat ${sample_files} && echo '------------------------------------') > ref-${test_name}
  echo "(./${file} ${sample_files} && echo '------------------------------------') > test-${test_name}"
  (./${file} ${sample_files} && echo '------------------------------------') > test-${test_name}
  diff ref-${test_name} test-${test_name} \
    || echo "test ${test_name} failed"
}

do_test good "../README.md ../LICENSE"
do_test bad "../README.md pipo ../LICENSE"

