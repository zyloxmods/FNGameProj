#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EncounterGoalSelectionTableEntry.h"
#include "FortAIEncounterGoalSelectionTable.generated.h"

UCLASS(Blueprintable)
class UFortAIEncounterGoalSelectionTable : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEncounterGoalSelectionTableEntry> EncounterGoalSelectionCriteria;
    
public:
    UFortAIEncounterGoalSelectionTable();
};

