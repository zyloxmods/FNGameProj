#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticAccountItem.h"
#include "FortHomebaseBannerIconItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHomebaseBannerIconItem : public UAthenaCosmeticAccountItem {
    GENERATED_BODY()
public:
    UFortHomebaseBannerIconItem();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetBannerIconLegacyName() const;
    
};

