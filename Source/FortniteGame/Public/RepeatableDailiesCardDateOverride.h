#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RepeatableDailiesCardDateOverride.generated.h"

class UFortQuestItemDefinition;

USTRUCT(BlueprintType)
struct FRepeatableDailiesCardDateOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortQuestItemDefinition> Quest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime End;
    
    FORTNITEGAME_API FRepeatableDailiesCardDateOverride();
};

