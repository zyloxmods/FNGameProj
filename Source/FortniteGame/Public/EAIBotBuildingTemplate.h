#pragma once
#include "CoreMinimal.h"
#include "EAIBotBuildingTemplate.generated.h"

UENUM(BlueprintType)
namespace EAIBotBuildingTemplate {
    enum Type {
        SingleWall,
        SingleRamp,
        SingleRoof,
        SingleBrace,
        SingleWallWindow,
        MAX,
    };
}

