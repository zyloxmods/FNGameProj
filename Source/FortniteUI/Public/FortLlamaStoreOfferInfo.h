#pragma once
#include "CoreMinimal.h"
#include "FortStoreFrontOfferInfo.h"
#include "FortLlamaStoreOfferInfo.generated.h"

class UFortCardPackItemDefinition;
class UFortPackPersonality;
class UTexture;
class UTexture2D;

UCLASS(Blueprintable)
class UFortLlamaStoreOfferInfo : public UFortStoreFrontOfferInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCardPackItemDefinition* LlamaOfferDisplayAsset;
    
public:
    UFortLlamaStoreOfferInfo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortCardPackItemDefinition* GetLlamaOfferDisplayAsset() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetDisplayAssetXrayImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPackPersonality* GetDisplayAssetPersonality() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetDisplayAssetImage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture* GetDisplayAssetIcon() const;
    
};

