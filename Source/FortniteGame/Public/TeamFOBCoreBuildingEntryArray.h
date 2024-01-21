#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "TeamFOBCoreBuildingEntry.h"
#include "TeamFOBCoreBuildingEntryArray.generated.h"

USTRUCT(BlueprintType)
struct FTeamFOBCoreBuildingEntryArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeamFOBCoreBuildingEntry> Items;
    
public:
    FORTNITEGAME_API FTeamFOBCoreBuildingEntryArray();
};

