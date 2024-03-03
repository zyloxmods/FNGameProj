#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortConsumableAccountItem.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConsumableAccountItem : public UFortAccountItem {
    GENERATED_BODY()
public:
    UFortConsumableAccountItem();
    UFUNCTION(BlueprintCallable)
    bool CanActivateOnSelf();
    
    UFUNCTION(BlueprintCallable)
    bool CanActivateOnOthers();

    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("ConsumableAccountItem", GetFName());
    }
};

