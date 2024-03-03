#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortPlayerCharm.generated.h"

class ACustomCosmeticCharmModifier;
class UAthenaCharmItemDefinition;
class USceneComponent;
class USkeletalMeshComponentBudgeted;
class USoundBase;

UCLASS(Abstract, Blueprintable)
class AFortPlayerCharm : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharmItemDefinition* CharmItemDef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* CharmMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsFrontEndPreview;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USceneComponent* CharmAttachedTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CharmAttachedToSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACustomCosmeticCharmModifier* CharmModifier;
    
public:
    AFortPlayerCharm();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void PreDestruction();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharmVisibilityChanged(bool bVisible);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetCharmSoundAssetByIndex(const int32 IndexIn, bool& bValidOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USoundBase* GetCharmSoundAssetByDescName(const FName DescNameIn, bool& bValidOut) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USkeletalMeshComponentBudgeted* GetCharmMeshComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCharmAttachedToSocket() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetCharmAttachedToComponent() const;
    
};

