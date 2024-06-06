#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemDefinition.h"
#include "FortPersistentResourceItemDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPersistentResourceItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEventItem;
    
public:
    UFortPersistentResourceItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEventItem() const;

    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("AccountResource", GetFName());
    }
};

