# Nome do executável
EXECUTABLE = teste

# Diretórios dos arquivos fonte
SRCDIR = src
INCDIR = include

# Arquivos fonte
SOURCES = main.cpp $(SRCDIR)/casa.cpp $(SRCDIR)/colors.cpp $(SRCDIR)/formas.cpp $(SRCDIR)/outside.cpp $(SRCDIR)/motion.cpp

# Flags do compilador
CXXFLAGS = -Wall -Wextra -std=c++11 -I$(INCDIR)

# Bibliotecas a serem vinculadas
LIBS = -lglut -lGLU -lGL -lm

# Comando de compilação
CXX = g++

# Gerar lista de objetos
OBJECTS = $(SOURCES:.cpp=.o)

# Regra principal para construir o executável
all: $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(EXECUTABLE) $(LIBS)

# Regra para compilar arquivos .cpp em arquivos .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Limpar arquivos intermediários e executável
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
