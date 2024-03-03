#pragma once
#include "CoreMinimal.h"
#include "CustomCosmeticModifierBase.h"
#include "EFortCustomCharmType.h"
#include "CustomCosmeticCharmModifier.generated.h"

class AFortPlayerCharm;
class UMeshComponent;

UCLASS(Abstract, Blueprintable)
class ACustomCosmeticCharmModifier : public ACustomCosmeticModifierBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomCharmType::Type> CharmType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerCharm* MyCharmOwner;
    
public:
    ACustomCosmeticCharmModifier();
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPawnAndCharmChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharmVisibilityChanged(bool bVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetSkeletalMeshForAssociatedPlayerPawnCharmType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerCharm* GetCharmOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EFortCustomCharmType::Type> GetCharacterCharmType() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceResetParticleSystems();
    
};

