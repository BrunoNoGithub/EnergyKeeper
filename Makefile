OBJS= main.cpp
OBJ_NAME = main
CC= g++

COMPILER_FLAGS= -v

SDL_FLAGS= `sdl2-config --cflags --libs`

all: $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) -o $(OBJ_NAME) $(SDL_FLAGS)
