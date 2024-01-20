#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "TeamStrategicBuildingEntry.h"
#include "TeamStrategicBuildingEntryArray.generated.h"

USTRUCT(BlueprintType)
struct FTeamStrategicBuildingEntryArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeamStrategicBuildingEntry> Items;
    
public:
    FORTNITEGAME_API FTeamStrategicBuildingEntryArray();
};

