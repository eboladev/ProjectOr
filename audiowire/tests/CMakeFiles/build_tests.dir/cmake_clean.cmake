FILE(REMOVE_RECURSE
  "CMakeFiles/build_tests"
)

# Per-language clean rules from dependency scanning.
FOREACH(lang)
  INCLUDE(CMakeFiles/build_tests.dir/cmake_clean_${lang}.cmake OPTIONAL)
ENDFOREACH(lang)
