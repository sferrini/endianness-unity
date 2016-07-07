EXECUTABLE=endianness-unity

all:
	clang ./tests/test_endianness.c ./src/endianness.c ./unity/unity.c -o $(EXECUTABLE)

clean:
	rm $(EXECUTABLE)
