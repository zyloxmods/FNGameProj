#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortAccountItemDefinition.h"
#include "FortCardPackItemDefinition.generated.h"

class UFortPackPersonality;
class UTexture;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI)
class UFortCardPackItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("CardPack", GetFName());
    }
private:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsLlama;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsChoicePack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoOpenAsReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LootTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LootTierGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisplayRarityLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture> PackImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> XRayTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor PackColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortPackPersonality> PackPersonality;
    
public:
    UFortCardPackItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLlama() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsChoicePack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetXRayImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPackPersonality* GetPackPersonality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetPackImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetPackColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDisplayRarityLevel() const;
    
};

