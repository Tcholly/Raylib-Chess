// This file is auto generated
#pragma once

#include <string>

#ifndef RL_COLOR_TYPE
	// Color, 4 components, R8G8B8A8 (32bit)
	typedef struct Color
	{
		unsigned char r;        // Color red value
		unsigned char g;        // Color green value
		unsigned char b;        // Color blue value
		unsigned char a;        // Color alpha value
	} Color;
	#define RL_COLOR_TYPE
#endif

#ifndef RL_VECTOR2_TYPE
	typedef struct Vector2
	{
		float x;
		float y;
	} Vector2;
	#define RL_COLOR_TYPE
#endif

#ifndef PI
	#define PI 3.14159265358979323846f
#endif
#ifndef E
	#define E 2.71828182845904523536f
#endif

namespace Globals
{
	namespace Textures
	{
		const std::string WHITE_PIECES = "Assets/Textures/WhitePieces.png";
		const std::string BLACK_PIECES = "Assets/Textures/BlackPieces.png";
		const std::string SAVE_ICON = "Assets/Textures/icons-save.png";
	} // namespace Textures

	namespace Colors
	{
		const Color BACKGROUND = {20, 52, 37, 255};
		const Color BOARD_OUTLINE = {0, 102, 151, 255};
		const Color BOARD_SELECTED = {192, 207, 109, 255};
		const Color BOARD_LEGAL_MOVE = {82, 131, 80, 255};
		const Color BOARD_BLACK = {34, 34, 34, 255};
		const Color BOARD_WHITE = {242, 242, 242, 255};
		const Color BUTTON = {170, 1, 21, 255};
	} // namespace Colors

	namespace EatParticle
	{
		const float LIFETIME = 1.5f;
		const Vector2 VELOCITY = {130.0f,-125.0f};
		const float ROTATION = PI/2.0f;
		const float ROTATION_VEL = 2.0f;
		const Vector2 ACCELERATION = {0.0f,0.0f};
		const float ROTATION_ACCEL = -1.64f;
		const Color BEGIN_COLOR = {177, 199, 206, 255};
		const Color END_COLOR = {53, 99, 97, 1};
		const Vector2 ASPECT_RATIO = {1.0f,1.0f};
		const float MIN_SIZE_FACTOR = 2.0f;
		const float MAX_SIZE_FACTOR = 10.0f;
		const float INTERVAL = 0.04f;
		const float RANDOMNESS = 0.41f;
		const float SPREAD = 2.0f*PI;
	} // namespace EatParticle

	const std::string BASIC_BOARD_PATH = "Assets/Boards/basic_board.csv";
} // namespace Globals

