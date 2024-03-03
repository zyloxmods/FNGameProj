#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CustomCosmeticModifierBase.h"
#include "EFortCustomPartType.h"
#include "FortVFXDataOwner.h"
#include "MarshalledVFXRuntimeData.h"
#include "CustomCharacterPartModifier.generated.h"

class UFXSystemComponent;
class UMeshComponent;

UCLASS(Abstract, Blueprintable)
class ACustomCharacterPartModifier : public ACustomCosmeticModifierBase, public IFortVFXDataOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ChildComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFXSystemComponent* IdleVFX;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCustomPartType PartType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMarshalledVFXRuntimeData> RuntimeParticleData;
    
public:
    ACustomCharacterPartModifier();
    UFUNCTION(BlueprintCallable)
    void SetChildParticleComponentsVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetChildMeshComponentsHidden(bool bHideChildComponents);
    
    UFUNCTION(BlueprintCallable)
    void SetCharacterActiveVariant(const FGameplayTag& ChannelTag, const FGameplayTag& VariantTag);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPawnAndPartChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetSkeletalMeshForAssociatedPlayerPawnPartType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFXSystemComponent* GetIdleVFXComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortCustomPartType GetCharacterPartType() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceResetParticleSystems();
    
    
    // Fix for true pure virtual functions not being implemented
};

