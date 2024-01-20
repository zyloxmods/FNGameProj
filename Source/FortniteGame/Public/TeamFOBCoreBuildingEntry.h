#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "GameplayTagContainer.h"
#include "TeamFOBCoreBuildingEntry.generated.h"

class ABuildingFOBCoreActor;

USTRUCT(BlueprintType)
struct FTeamFOBCoreBuildingEntry : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingFOBCoreActor* FOB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SpawnLocationTags;
    
    FORTNITEGAME_API FTeamFOBCoreBuildingEntry();
};

