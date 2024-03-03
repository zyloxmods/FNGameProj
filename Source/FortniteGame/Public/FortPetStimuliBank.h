#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "PetResponseFromQuestSystem.h"
#include "FortPetStimuliBank.generated.h"

UCLASS(Blueprintable)
class UFortPetStimuliBank : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPetResponseFromQuestSystem> QuestTriggers;
    
    UFortPetStimuliBank();
};

