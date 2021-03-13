cd src
c++ -I. -I./Objects -I./CommandLanguage -I./OpenGL -I./Maths *.cpp Maths/*.cpp OpenGL/*.c OpenGL/*.cpp ./Objects/*.cpp ./CommandLanguage/*.cpp Loaders/*.cpp -lGLEW -lGL -o Phantasma
