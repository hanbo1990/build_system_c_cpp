# gtest_proj = subproject('gtest')


tests_src = files('test_entry.cpp')

gtestexe = executable(
  'gtest-all',
  tests_src,
  include_directories : include_dirs,
  dependencies : [
    dependency('gtest', method: 'pkg-config'),
    dependency('gmock', method: 'pkg-config'),
  ],
  cpp_args : ['--coverage' ],
  link_args : ['-lgcov', '--coverage' ],
)

# you can use ninja test in the build foler to run the testing
test('gtest tests', gtestexe)
