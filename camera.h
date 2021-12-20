#pragma once
#include "graphics.h"
#include <iostream>
#include <vector>
class Camera
{
private:
	double targetx, targety;
	int map_range;
	bool isshow = false, isrun = false;
	bool render();
	
	
public:
	bool update();
	void movecam(double x, double y);
	void start();
	void stop();
	bool finish_init = false;
	double nowx, nowy;
	std::vector<std::vector<std::vector<PIMAGE>>>gp; //ͼƬ�ز�
	std::vector<std::string>gp_type;
	Camera();
};

extern Camera camera;

