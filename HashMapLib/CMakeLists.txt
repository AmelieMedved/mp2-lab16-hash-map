file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

add_library(${HashMapLib} STATIC ${srcs} ${hdrs})

