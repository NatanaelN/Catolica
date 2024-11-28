cmake_minimum_required(VERSION 3.29)
project(final_flappy C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
set(CMAKE_OBJECT_PATH_MAX 500)
add_executable(final_flappy
    	configs.c
    	configs.h
    	creditos.c
    	FlappyBird.c
    	inicio.c
    	inicio.h
    	instrucao.c
    	main.c
    	msg.c
    	score.c
        flappybird.h
        score.h
        instrucao.h
        msg.h
        creditos.h
)
