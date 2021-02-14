#include "Tile.h"

#include "Config.h"
#include "TextureManager.h"
#include "Util.h"

Tile::Tile()
{
	setWidth(Config::TILE_SIZE);
	setHeight(Config::TILE_SIZE);

	SetTileCost(0.0f);
}

Tile::~Tile()
= default;

void Tile::draw()
{
	Util::DrawRect(getTransform()->position, getWidth(), getHeight());
}

void Tile::update()
{
}

void Tile::clean()
{
}

Tile* Tile::GetNeighbourTile(const NeighbourTile position)
{
	return m_neighbours[position];
}

void Tile::SetNeighbourTile(const NeighbourTile position, Tile* tile)
{
	m_neighbours[position] = tile;
}

float Tile::GetTileCost()
{
	return m_cost;
}

void Tile::SetTileCost(float cost)
{
	m_cost = cost;
}
