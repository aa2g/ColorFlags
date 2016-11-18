#pragma once
ref class RGBATuple
{
public:

	RGBATuple()
	{
	}

	//RGBA tuple
	float fRed;
	float fGreen;
	float fBlue;
	float fAlpha;

	void fromFTuple(float r, float g, float b, float a)
	{
		fRed = r;
		fGreen = g;
		fBlue = b;
		fAlpha = a;
	}
	void fromITuple(int r, int g, int b, int a)
	{
		fRed = fromi(r);
		fGreen = fromi(g);
		fBlue = fromi(b);
		fAlpha = fromi(a);
	}

	inline float fromi(int i)
	{
		return i / 255.0f;
	}

	inline int toi(const float f)
	{
		return static_cast<int>(255 * f);
	}

	inline int iRed()
	{
		return toi(fRed);
	}

	inline int iGreen()
	{
		return toi(fGreen);
	}

	inline int iBlue()
	{
		return toi(fBlue);
	}

	inline int iAlpha()
	{
		return toi(fAlpha);
	}

};

