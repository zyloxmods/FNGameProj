#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMultiSizeBrush.h"
#include "ItemCategory.generated.h"

USTRUCT(BlueprintType)
struct FItemCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush CategoryBrush;
    
    FORTNITEGAME_API FItemCategory();
};

