#include "FortNavObstacleComponent.h"
#include "FortNavArea_Obstacle.h"

UFortNavObstacleComponent::UFortNavObstacleComponent() {
    ObstacleAreaClass = UFortNavArea_Obstacle::StaticClass();
}

