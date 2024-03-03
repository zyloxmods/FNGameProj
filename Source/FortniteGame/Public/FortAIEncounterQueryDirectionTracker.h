#pragma once
#include "CoreMinimal.h"
#include "EFortEncounterDirection.h"
#include "FortAIEncounterQueryDirectionTracker.generated.h"

USTRUCT(BlueprintType)
struct FFortAIEncounterQueryDirectionTracker {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasTriedPreviousDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EFortEncounterDirection::Type>> PreviousQueryDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EFortEncounterDirection::Type>> ChosenDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EFortEncounterDirection::Type>> FailedDirections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EFortEncounterDirection::Type>> AvailableDirections;
    
    FORTNITEGAME_API FFortAIEncounterQueryDirectionTracker();
};

