AM_CXXFLAGS = $(BOOST_CPPFLAGS)

bin_PROGRAMS = connect create read

connect_SOURCES = connect.cpp
connect_LDADD = -lboost_thread -lboost_system -lboost_regex -lmongoclient

create_SOURCES = create.cpp
create_LDADD = -lboost_thread -lboost_system -lboost_regex -lmongoclient

read_SOURCES = read.cpp
read_LDADD = -lboost_thread -lboost_system -lboost_regex -lmongoclient

