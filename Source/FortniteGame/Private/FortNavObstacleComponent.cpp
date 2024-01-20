#include "FortNavObstacleComponent.h"
#include "FortNavArea_Obstacle.h"

UFortNavObstacleComponent::UFortNavObstacleComponent() {
    this->ObstacleAreaClass = UFortNavArea_Obstacle::StaticClass();
}

