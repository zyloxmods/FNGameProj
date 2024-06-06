#pragma once
#include "CoreMinimal.h"
#include "AthenaDanceItemDefinition.h"
#include "AthenaSprayItemDefinition.generated.h"

class UMaterialInterface;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaSprayItemDefinition : public UAthenaDanceItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> DecalMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProgressiveCosmeticStatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBannerAsTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> DecalTexture;
    
public:
    UAthenaSprayItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool ShouldUseBannerAsTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetDecalTexture() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UMaterialInterface> GetDecalMaterial() const;
    
};

