#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMultiSizeBrush.h"
#include "FortAttributeDetailsInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortAttributeDetailsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    FORTNITEGAME_API FFortAttributeDetailsInfo();
};

