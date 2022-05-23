//
// Created by arthur on 23/05/22.
//
#include "AWindow.hpp"

Concerto::AWindow::AWindow(const std::string& title, unsigned int width, unsigned int height) : _title(title), _width(width), _height(height)
{

}

std::size_t Concerto::AWindow::getWidth()
{
	return _width;
}

std::size_t Concerto::AWindow::getHeight()
{
	return _height;
}

const Concerto::Math::Vector4f& Concerto::AWindow::getClearColor() const
{
	return _clearColor;
}

void Concerto::AWindow::setClearColor(const Concerto::Math::Vector4f& color)
{
	_clearColor = color;
}

void Concerto::AWindow::setClearColor(float r, float g, float b, float a)
{
	_clearColor = Math::Vector4f(r, g, b, a);
}

