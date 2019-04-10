%module mytest

%insert(cgo_comment_typedefs) %{
#cgo CXXFLAGS: -std=c++11 -D_GLIBCXX_USE_CXX11_ABI=0 -I../libtorch/include/ -I../libtorch/include/torch/csrc/api/include/ -I/usr/include/python3.7m/
#cgo LDFLAGS: -L../libtorch/lib/ -ltorch -lcaffe2 -lc10
%}

%inline %{
extern void myfunc();
%}
