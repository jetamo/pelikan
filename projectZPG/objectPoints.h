﻿#pragma once
const float cubePoints[] = { -0.5f, -0.5f, 0.5f, 1.0f, 0.0f, 0.0f,
			0.5f, -0.5f, 0.5f, 0.0f, 1.0f, 0.0f,
			-0.5f, 0.5f, 0.5f, 0.0f, 0.0f, 1.0f,
			0.5f, 0.5f, 0.5f, 1.0f, 0.0f, 0.0f,
			0.5f, -0.5f, 0.5f, 0.0f, 1.0f, 0.0f,
			-0.5f, 0.5f, 0.5f, 0.0f, 0.0f, 1.0f,

			-0.5f, -0.5f, -0.5f, 1.0f, 0.0f, 0.0f,
			0.5f, -0.5f, -0.5f, 0.0f, 1.0f, 0.0f,
			-0.5f, 0.5f, -0.5f, 0.0f, 0.0f, 1.0f,
			0.5f, 0.5f, -0.5f, 1.0f, 0.0f, 0.0f,
			0.5f, -0.5f, -0.5f, 0.0f, 1.0f, 0.0f,
			-0.5f, 0.5f, -0.5f, 0.0f, 0.0f, 1.0f,

			-0.5f, -0.5f, 0.5f, 1.0f, 0.0f, 0.0f,
			-0.5f, 0.5f, 0.5f, 0.0f, 1.0f, 0.0f,
			-0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 1.0f,
			-0.5f, 0.5f, -0.5f, 1.0f, 0.0f, 0.0f,
			-0.5f, 0.5f, 0.5f, 0.0f, 1.0f, 0.0f,
			-0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 1.0f,

			0.5f, -0.5f, 0.5f, 1.0f, 0.0f, 0.0f,
			0.5f, 0.5f, 0.5f, 0.0f, 1.0f, 0.0f,
			0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 1.0f,
			0.5f, 0.5f, -0.5f, 1.0f, 0.0f, 0.0f,
			0.5f, 0.5f, 0.5f, 0.0f, 1.0f, 0.0f,
			0.5f, -0.5f, -0.5f, 0.0f, 0.0f, 1.0f, };

const float TcubePoints[] = {
	-1.0f,-1.0f,-1.0f, 0.3f, 0.0f, 0.0f,0.000059f, 1.0f - 0.000004f,
	-1.0f,-1.0f, 1.0f, 0.3f, 0.0f, 0.0f,0.000103f, 1.0f - 0.336048f,
	-1.0f, 1.0f, 1.0f, 0.3f, 0.0f, 0.0f,0.335973f, 1.0f - 0.335903f,
	1.0f, 1.0f,-1.0f,  0.3f, 0.0f, 0.0f,1.000023f, 1.0f - 0.000013f,
	-1.0f,-1.0f,-1.0f, 0.3f, 0.0f, 0.0f,0.667979f, 1.0f - 0.335851f,
	-1.0f, 1.0f,-1.0f, 0.3f, 0.0f, 0.0f,0.999958f, 1.0f - 0.336064f,
	1.0f,-1.0f, 1.0f,  0.3f, 0.0f, 0.0f,0.667979f, 1.0f - 0.335851f,
	-1.0f,-1.0f,-1.0f, 0.3f, 0.0f, 0.0f,0.336024f, 1.0f - 0.671877f,
	1.0f,-1.0f,-1.0f,  0.3f, 0.0f, 0.0f,0.667969f, 1.0f - 0.671889f,
	1.0f, 1.0f,-1.0f,  0.3f, 0.0f, 0.0f,1.000023f, 1.0f - 0.000013f,
	1.0f,-1.0f,-1.0f,  0.3f, 0.0f, 0.0f,0.668104f, 1.0f - 0.000013f,
	-1.0f,-1.0f,-1.0f, 0.3f, 0.0f, 0.0f,0.667979f, 1.0f - 0.335851f,
	-1.0f,-1.0f,-1.0f, 0.3f, 0.0f, 0.0f,0.000059f, 1.0f - 0.000004f,
	-1.0f, 1.0f, 1.0f, 0.3f, 0.0f, 0.0f,0.335973f, 1.0f - 0.335903f,
	-1.0f, 1.0f,-1.0f, 0.3f, 0.0f, 0.0f,0.336098f, 1.0f - 0.000071f,
	1.0f,-1.0f, 1.0f,  0.3f, 0.0f, 0.0f,0.667979f, 1.0f - 0.335851f,
	-1.0f,-1.0f, 1.0f, 0.3f, 0.0f, 0.0f,0.335973f, 1.0f - 0.335903f,
	-1.0f,-1.0f,-1.0f, 0.3f, 0.0f, 0.0f,0.336024f, 1.0f - 0.671877f,
	-1.0f, 1.0f, 1.0f, 0.3f, 0.0f, 0.0f,1.000004f, 1.0f - 0.671847f,
	-1.0f,-1.0f, 1.0f, 0.3f, 0.0f, 0.0f,0.999958f, 1.0f - 0.336064f,
	1.0f,-1.0f, 1.0f,  0.3f, 0.0f, 0.0f,0.667979f, 1.0f - 0.335851f,
	1.0f, 1.0f, 1.0f,  0.3f, 0.0f, 0.0f,0.668104f, 1.0f - 0.000013f,
	1.0f,-1.0f,-1.0f,  0.3f, 0.0f, 0.0f,0.335973f, 1.0f - 0.335903f,
	1.0f, 1.0f,-1.0f,  0.3f, 0.0f, 0.0f,0.667979f, 1.0f - 0.335851f,
	1.0f,-1.0f,-1.0f,  0.3f, 0.0f, 0.0f,0.335973f, 1.0f - 0.335903f,
	1.0f, 1.0f, 1.0f,  0.3f, 0.0f, 0.0f,0.668104f, 1.0f - 0.000013f,
	1.0f,-1.0f, 1.0f,  0.3f, 0.0f, 0.0f,0.336098f, 1.0f - 0.000071f,
	1.0f, 1.0f, 1.0f,  0.3f, 0.0f, 0.0f,0.000103f, 1.0f - 0.336048f,
	1.0f, 1.0f,-1.0f,  0.3f, 0.0f, 0.0f,0.000004f, 1.0f - 0.671870f,
	-1.0f, 1.0f,-1.0f, 0.3f, 0.0f, 0.0f,0.336024f, 1.0f - 0.671877f,
	1.0f, 1.0f, 1.0f,  0.3f, 0.0f, 0.0f,0.000103f, 1.0f - 0.336048f,
	-1.0f, 1.0f,-1.0f, 0.3f, 0.0f, 0.0f,0.336024f, 1.0f - 0.671877f,
	-1.0f, 1.0f, 1.0f, 0.3f, 0.0f, 0.0f,0.335973f, 1.0f - 0.335903f,
	1.0f, 1.0f, 1.0f,  0.3f, 0.0f, 0.0f,0.667969f, 1.0f - 0.671889f,
	-1.0f, 1.0f, 1.0f, 0.3f, 0.0f, 0.0f,1.000004f, 1.0f - 0.671847f,
	1.0f,-1.0f, 1.0f,  0.3f, 0.0f, 0.0f,0.667979f, 1.0f - 0.335851f
};

const float plain[] = {
	//vrchol, normála, uv souřadnice
	1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 0.0f,
	1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   1.0f, 0.0f,
   -1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   1.0f, 1.0f,

   -1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 1.0f,
	1.0f, 0.0f, 1.0f,   0.0f, 1.0f, 0.0f,   0.0f, 0.0f,
   -1.0f, 0.0f,-1.0f,   0.0f, 1.0f, 0.0f,   1.0f, 1.0f
};