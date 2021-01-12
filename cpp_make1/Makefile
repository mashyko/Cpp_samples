CXX = g++
TARGET = hello
CXXFLAGS = -g -Wall  
SRCS = hello.cpp #SRCSに複数ソースを置ける
OBJS := $(SRCS:.cpp=.o) #SRCSの各ファイルの拡張子の.cppを.oに変換

$(TARGET): $(OBJS) # OBLSのファイルをTAEGETの実行ファイル名に変換
	$(CXX) -o $@ $(OBJS)

clean:
	rm -f $(TARGET) $(OBJS)
