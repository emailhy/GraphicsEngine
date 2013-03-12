/*
 * Color.h
 *
 *  Created on: 27.04.2011
 *      Author: Norbert Nopper
 */

#ifndef COLOR_H_
#define COLOR_H_

#include "../../UsedLibs.h"

class Color
{

private:

	float rgba[4];

public:

	const static Color WHITE;
	const static Color WHITE_TRANSPARENT;
	const static Color BLACK;
	const static Color BLACK_TRANSPARENT;
	const static Color RED;
	const static Color RED_TRANSPARENT;
	const static Color GREEN;
	const static Color GREEN_TRANSPARENT;
	const static Color BLUE;
	const static Color BLUE_TRANSPARENT;
	const static Color YELLOW;
	const static Color YELLOW_TRANSPARENT;
	const static Color MAGENTA;
	const static Color MAGENTA_TRANSPARENT;
	const static Color CYAN;
	const static Color CYAN_TRANSPARENT;
	const static Color BRIGHT_GREY;
	const static Color BRIGHT_GREY_TRANSPARENT;
	const static Color GREY;
	const static Color GREY_TRANSPARENT;
	const static Color DARK_GREY;
	const static Color DARK_GREY_TRANSPARENT;

	const static Color DEFAULT_EMISSIVE;
	const static Color DEFAULT_AMBIENT;
	const static Color DEFAULT_DIFFUSE;
	const static Color DEFAULT_SPECULAR;
	const static Color DEFAULT_REFLECTION;
	const static Color DEFAULT_REFRACTION;

	Color();
	Color(float r, float g, float b);
	Color(float r, float g, float b, float a);
	Color(const float rgba[4]);
	Color(boost::uint8_t r, boost::uint8_t g, boost::uint8_t b);
	Color(boost::uint8_t r, boost::uint8_t g, boost::uint8_t b, boost::uint8_t a);
	Color(const boost::uint8_t rgba[4]);
	Color(const Color& other);
	~Color();

	void setRGBA(float r, float g, float b, float a);
	void setRGBA(const float rgba[4]);
	void setRGBA(boost::uint8_t r, boost::uint8_t g, boost::uint8_t b, boost::uint8_t a);
	void setRGBA(const boost::uint8_t rgba[4]);

	void setR(float r);
	float getR() const;
	void setG(float g);
	float getG() const;
	void setB(float b);
	float getB() const;
	void setA(float a);
	float getA() const;

	const float* getRGBA() const;
};

#endif /* COLOR_H_ */
