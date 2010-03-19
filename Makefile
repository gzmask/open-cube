# Linux (default)
EXE = test0002
LDFLAGS = -lGL -lGLU -lglut

# Windows (cygwin)
ifeq ($(OS), "Windows_NT")
	EXE = test0002.exe
		LDFLAGS = -lopengl32 -lglu32 -lglut32
endif

# OS X
ifeq "$(shell uname)" "Darwin"
	LDFLAGS = -framework Carbon -framework OpenGL -framework GLUT
endif

$(EXE) : src/test/test0002.cpp
	g++ -o ./bin/$@ $< $(CFLAGS) $(LDFLAGS)


