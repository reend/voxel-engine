#ifndef RENDERER_H
#define RENDERER_H

#include <glew.h>
#include <glfw3.h>
#include "Camera.h"
#include "Model.h"

class Renderer {
public:
    Renderer();
    ~Renderer();
    void init();
    void drawCube();
    void processInput(float deltaTime);
    void clear();
    void swapBuffers();
    void cleanup();
    bool shouldClose() const;
    Camera* getCamera() const;

private:
    GLFWwindow* window;
    GLuint VAO, VBO;
    GLuint groundVAO, groundVBO;
    GLuint shaderProgram;
    Camera* camera;

    GLuint cubeTexture;
    GLuint groundTexture;

    Model* model; // Add this line

    void setupCube();
    void setupGround();
    void drawGround();
};

#endif // RENDERER_H
