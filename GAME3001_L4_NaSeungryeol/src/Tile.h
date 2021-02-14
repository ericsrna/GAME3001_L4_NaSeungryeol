#pragma once
#ifndef __TILE__
#define __TILE__
#include "DisplayObject.h"
#include "Label.h"
#include "NeighbourTile.h"

class Tile : public DisplayObject
{
public:
	// Constructor
	Tile();
	
	// Destructor
	~Tile();
	
	// Life-Cycle Functions
	void draw() override;
	void update() override;
	void clean() override;

	Tile* GetNeighbourTile(NeighbourTile position);
	void SetNeighbourTile(NeighbourTile position, Tile* tile);

	float GetTileCost() const;
	void SetTileCost(const float cost);

	void addLabels();
	void setLabelsEnabled(bool state) const;

	glm::vec2 getGridPosition() const;
	void setGridPosition(const float col, const float row);

private:
	float m_cost;

	Label* m_costLabel;
	Label* m_statusLabel;
	
	Tile* m_neighbours[NUM_OF_NEIGHBOUR_TILES];

	glm::vec2 m_gridPosition;
};

#endif /* defined (__TILE__) */