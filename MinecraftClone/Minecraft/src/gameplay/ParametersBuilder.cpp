#include "gameplay/ParametersBuilder.cpp"
#include "gameplay/ParametersBuilder.h"

#include <iostream>

const std::array<sf::Vector2i, ParameterType::NUMBER_OF_TYPES + 1> ParametersTexturePositions{
	sf::Vector2i{0 * 9, 18},
	sf::Vector2i{1 * 9, 18},
	sf::Vector2i{2 * 9, 18},
	sf::Vector2i{3 * 9, 18},
	sf::Vector2i{4 * 9, 18},
	sf::Vector2i{5 * 9, 18},
	sf::Vector2i{6 * 9, 18},

	sf::Vector2i{7 * 9, 18},
};

{
	if (m_pPlayer->isInCreativeMove())
		return;

	int hp = m_pPlayer->getHP();
	if (hp < 0)
		hp = 0;

	int fullHearts = hp >> 1;
	bool halfHeart = hp % 2;
	int emptyHearts = (20 - hp) >> 1;

	int iconNumber = 0;

	for (int i = 0; i < fullHearts; ++i)
		buildIcon(FullHeart, iconNumber++);
	if (halfHeart)
		buildIcon(HalfHeart, iconNumber++);
	for (int i = 0; i < emptyHearts; ++i)
		buildIcon(EmptyHeart, iconNumber++);
	}
}

void ParametersBuilder::buildIcon(ParameterType parameterType, int number)
{
	static const float RESX = g_RenderSettings.resolutionX;
	static const float RESY = g_RenderSettings.resolutionY;

	static const float INVENTORY_START_X = RESX * 0.36f;
	static const float INVENTORY_START_Y = RESY * 0.062f;
	static const float ICON_SIZE = (RESX - 2 * INVENTORY_START_X) / 20.0f;
	static const float BIAS = ICON_SIZE / 9.0f;
	float bias = BIAS * number;

	static const float HUNGER_START_X = RESX * 0.388f;

	static const float OXYGEN_START_X = HUNGER_START_X - 9 * ICON_SIZE;
	static const float OXYGEN_START_Y = INVENTORY_START_Y + ICON_SIZE * 1.2f;
	
	int startX, startY;
	// Health
	if (number < 10) {
		startX = INVENTORY_START_X;
		startY = INVENTORY_START_Y;
	}
	// Hunger
	else if (number < 20) {
		startX = HUNGER_START_X;
		startY = INVENTORY_START_Y;
	}
	// Bubbles
	else {
		startX = OXYGEN_START_X;
		startY = OXYGEN_START_Y;
	}

	std::array<GLfloat, 12> vertexPos{
		(startX + ICON_SIZE * number		- bias)	/ RESX,	(startY)				/ RESY,	0.0f,
		(startX + ICON_SIZE * (number + 1)	- bias)	/ RESX,	(startY)				/ RESY,	0.0f,
		(startX + ICON_SIZE * (number + 1)	- bias)	/ RESX,	(startY + ICON_SIZE)	/ RESY,	0.0f,
		(startX + ICON_SIZE * number		- bias)	/ RESX,	(startY + ICON_SIZE)	/ RESY,	0.0f,
	};

	for (auto & vertex : vertexPos) {
		vertex = vertex * 2 - 1.0f;
	}

	sf::Vector2i textureStarPos = ParametersTexturePositions[parameterType];
	std::array<GLfloat, 8U> texCoords{
		textureStarPos.x,		textureStarPos.y,
		textureStarPos.x + 9,	textureStarPos.y,
		textureStarPos.x + 9,	textureStarPos.y - 9,
		textureStarPos.x,		textureStarPos.y - 9,
	};

	for (auto & textureCoord : texCoords) {
		textureCoord /= IconDatabase::get().textureAtlas.getAtlasSize();
	}

	m_pIconsMesh->addIcon(vertexPos, texCoords);
}