#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMultiSizeBrush.h"
#include "FortTagUIData.generated.h"

USTRUCT(BlueprintType)
struct FFortTagUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Tag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FORTNITEGAME_API FFortTagUIData();
};

