#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EInlineObjectiveStatTagCheckEntryType.h"
#include "InlineObjectiveStatTagCheckEntry.generated.h"

USTRUCT(BlueprintType)
struct FInlineObjectiveStatTagCheckEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EInlineObjectiveStatTagCheckEntryType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Require: 1;
    
    FORTNITEGAME_API FInlineObjectiveStatTagCheckEntry();
};

