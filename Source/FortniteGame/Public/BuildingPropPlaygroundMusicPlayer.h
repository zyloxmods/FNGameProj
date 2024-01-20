#pragma once
#include "CoreMinimal.h"
#include "BuildingPropMusicPlayer.h"
#include "BuildingPropPlaygroundMusicPlayer.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class ABuildingPropPlaygroundMusicPlayer : public ABuildingPropMusicPlayer {
    GENERATED_BODY()
public:
    ABuildingPropPlaygroundMusicPlayer();
};

