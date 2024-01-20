#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EUpgradeInfoImageSize.h"
#include "FortDisplayAttribute.h"
#include "FortUpgradeInfo.generated.h"

class UFortHomebaseNodeItemDefinition;
class UMediaSource;
class UTexture2D;

UCLASS(Blueprintable)
class UFortUpgradeInfo : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortHomebaseNodeItemDefinition* NodeItemDef;
    
public:
    UFortUpgradeInfo();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUpgradeUnlocked() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPreviewing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMediaSource* GetVideo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetUpgradeUnlockLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNextLevelTitle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetNextLevelDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNextLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetItemName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon(EUpgradeInfoImageSize ImageSize) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayAttributes(TArray<FFortDisplayAttribute>& OutDisplayAttributes) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDescription() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCost() const;
    
    UFUNCTION(BlueprintCallable)
    void ForwardPreview();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPreview() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAffordUpgrade() const;
    
    UFUNCTION(BlueprintCallable)
    void BackwardPreview();
    
};

