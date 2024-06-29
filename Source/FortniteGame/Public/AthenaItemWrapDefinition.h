#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "AthenaItemWrapDefinition.generated.h"

class ACustomItemWrapModifier;
class UMaterialInterface;

UCLASS(Blueprintable)
class FORTNITEGAME_API UAthenaItemWrapDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACustomItemWrapModifier> ItemWrapModifierBlueprint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> ItemWrapMaterial;
    
public:
    UAthenaItemWrapDefinition(const FObjectInitializer& ObjectInitializer);
   virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("AthenaItemWrap", GetFName());
    }
};

