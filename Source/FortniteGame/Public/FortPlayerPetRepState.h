#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortInteractInterface.h"
#include "InteractionType.h"
#include "PetStimuliRepData.h"
#include "FortPlayerPetRepState.generated.h"

class AFortPlayerPawn;
class UAthenaPetItemDefinition;

UCLASS(Blueprintable)
class AFortPlayerPetRepState : public AActor, public IFortInteractInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_LookAtTarget, meta=(AllowPrivateAccess=true))
    AActor* LookAtTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PetItemDef, meta=(AllowPrivateAccess=true))
    UAthenaPetItemDefinition* PetItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_StimuliTag, meta=(AllowPrivateAccess=true))
    FPetStimuliRepData StimuliTag;
    
public:
    AFortPlayerPetRepState();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_StimuliTag();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PetItemDef();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_LookAtTarget();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetFortPlayerPawn() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool ServerOnAttemptInteract(const FInteractionType& InteractType) override PURE_VIRTUAL(ServerOnAttemptInteract, return false;);
    
};

