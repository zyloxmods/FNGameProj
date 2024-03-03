#pragma once
#include "CoreMinimal.h"
#include "SavedShopSectionState.generated.h"

USTRUCT(BlueprintType)
struct FSavedShopSectionState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> OfferIds;
    
    FORTNITEGAME_API FSavedShopSectionState();
};

