#pragma once
#include "glad/glad.h"
#include "GLFW/glfw3.h"

#include <vector>
#include "Gui.h"
#include "Raytracer.h"

class Graphics
{
public:

    Graphics() : gui(Gui()) {};

    void render();
    void mainLoop();
    void init(GLint width, GLint height);
    void start();
    void finish();
    bool isActive();
    void swapBuffers();


    Gui gui;
    bool initialized;
    bool active;
    GLuint width, height;
    GLuint shaderProgram;
    GLuint frameBuffer;
    GLuint vao;
    std::vector<glm::vec3> backBuffer;
    std::vector<glm::vec3> frontBuffer;
    glm::ivec2 pixelDataSize;
    GLFWwindow* window;
    
};