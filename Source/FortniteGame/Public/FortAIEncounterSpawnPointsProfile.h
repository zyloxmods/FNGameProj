#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "GameplayTagContainer.h"
#include "FortAIEncounterSpawnPointsProfile.generated.h"

USTRUCT(BlueprintType)
struct FFortAIEncounterSpawnPointsProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer EncounterTypeTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurveTableRowHandle> MaxSpawnPointsPerPlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurveTableRowHandle> MinSpawnPointsPerPlayerCount;
    
    FORTNITEGAME_API FFortAIEncounterSpawnPointsProfile();
};

