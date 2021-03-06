#pragma once

#include "Application.h"
#include "Renderer2D.h"
#include "BinaryTree.h"
#include <imgui.h>

class Application2D : public aie::Application {
public:

	Application2D();
	virtual ~Application2D();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Font*			m_font;

	float m_timer;
};       