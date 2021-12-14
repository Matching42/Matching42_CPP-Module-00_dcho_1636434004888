#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	float alpha = ((b.getY().toFloat() - c.getY().toFloat())*(point.getX().toFloat() - c.getX().toFloat()) + (c.getX().toFloat() - b.getX().toFloat())*(point.getY().toFloat() - c.getY().toFloat())) /
				((b.getY().toFloat() - c.getY().toFloat())*(a.getX().toFloat() - c.getX().toFloat()) + (c.getX().toFloat() - b.getX().toFloat())*(a.getY().toFloat() - c.getY().toFloat()));

	float beta = ((c.getY().toFloat() - a.getY().toFloat())*(point.getX().toFloat() - c.getX().toFloat()) + (a.getX().toFloat() - c.getX().toFloat())*(point.getY().toFloat() - c.getY().toFloat())) /
				((b.getY().toFloat() - c.getY().toFloat())*(a.getX().toFloat() - c.getX().toFloat()) + (c.getX().toFloat() - b.getX().toFloat())*(a.getY().toFloat() - c.getY().toFloat()));

	float gamma = 1.0f - alpha - beta;

	if (alpha > 0 && beta > 0 && gamma > 0)
		return (true);
	else
		return (false);
}


