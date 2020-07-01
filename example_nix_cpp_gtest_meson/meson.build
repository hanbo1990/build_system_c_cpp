# Step 1: Set up project
project('test_app',                     # project name
        'cpp',                          # project language
        version: '0.0.0',               # project version
        default_options: [
          'b_lundef=false',
          'b_staticpic=false',
          'cpp_std=c++14'])

# Step 2: Prepare build arguments
include_dirs = include_directories('include')           # include directory should be specified
src_files = []                                          # create a list to contain source files
deps = []                                               # dependencies
deps += [dependency('openssl', method: 'pkg-config')]   # add dependencies if needed

build_args = ['-Wno-unused-variable',   # compiler arguments
              '-Wno-unused-function',
              '-Wall',
              '-Wextra',
              '-Wno-unused-parameter']
link_args = []                          # link arguments

# Step 4: Enter different directory to collect source files or arguments
message('entering directory')

# subdir('src')
subdir('test')

# Step 5: Prepare file for ninjia to build
# message('preparing to build executable')

# executable('test_app',
#            sources: src_files,
#            include_directories: include_dirs,
#            install: false,
#            c_args: build_args,
#            link_args: link_args,
#            dependencies: deps)

# message('actual build does not happen here, build happen in ninjia')

# run_target('postbuild', 
#   command : ['./scripts/postbuild.sh', 'argument2'])