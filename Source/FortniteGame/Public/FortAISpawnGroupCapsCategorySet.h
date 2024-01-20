#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortAIEncounterSpawnGroupCapsCategory.h"
#include "FortAISpawnGroupCapsCategorySet.generated.h"

UCLASS(Blueprintable)
class UFortAISpawnGroupCapsCategorySet : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAIEncounterSpawnGroupCapsCategory> SpawnGroupCapsCategories;
    
public:
    UFortAISpawnGroupCapsCategorySet();
};

