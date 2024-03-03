#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EFortItemType.h"
#include "EFortItemCardSize.h"
#include "FortItemCardUtilities.generated.h"

UCLASS(Blueprintable)
class UFortItemCardUtilities : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortItemCardUtilities();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FVector2D GetCardDimensions(const EFortItemType ItemType, const EFortItemCardSize CardSize, const bool IsReward, const bool UseNewItemCardSizes);
    
};

