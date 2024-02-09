CXX = g++
CXXFLAGS =-std=c++14 -Wall -Werror=vla -MMD -lX11
EXEC = main
OBJECTS = main.o Cell.o NumStack.o Stack.o Table.o Txt.o Vector.o
DEPENDS = ${OBJECTS:.o=.d}

${EXEC}: ${OBJECTS}
	${CXX} ${CXXFLAGS} ${OBJECTS} -o ${EXEC} -L/opt/X11/lib -lX11

-include ${DEPENDS}

.PHONY: clean

clean:
	rm ${OBJECTS} ${EXEC} ${DEPENDS}