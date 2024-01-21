#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "TeamStrategicBuildingHandle.h"
#include "TeamStrategicBuildingEntry.generated.h"

class AStrategicBuildingActor;

USTRUCT(BlueprintType)
struct FTeamStrategicBuildingEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTeamStrategicBuildingHandle StrategicBuildingHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AStrategicBuildingActor* StrategicBuilding;
    
    FORTNITEGAME_API FTeamStrategicBuildingEntry();
};

