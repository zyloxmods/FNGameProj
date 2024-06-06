#pragma once
#include "CoreMinimal.h"
#include "FortMontageItemDefinitionBase.h"
#include "FortEmoteItemDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortEmoteItemDefinition : public UFortMontageItemDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CommandName;
    
public:
    UFortEmoteItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetCommandName() const;
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Emote", GetFName());
    }
};

