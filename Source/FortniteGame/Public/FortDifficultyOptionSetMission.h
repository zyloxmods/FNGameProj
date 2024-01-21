#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortDifficultyOptionSetMission.generated.h"

class UFortDifficultyOptionCategoryMission;

UCLASS(Blueprintable)
class UFortDifficultyOptionSetMission : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortDifficultyOptionCategoryMission*> MissionOptionsCategories;
    
public:
    UFortDifficultyOptionSetMission();
};

