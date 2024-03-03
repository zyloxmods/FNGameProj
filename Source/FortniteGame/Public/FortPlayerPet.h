#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortInteractInterface.h"
#include "InteractionType.h"
#include "FortPlayerPet.generated.h"

class AFortPlayerPawn;
class UAthenaPetItemDefinition;
class UAudioComponent;
class UFortTaggedSoundBank;
class UMaterialInterface;
class USkeletalMeshComponentBudgeted;
class USphereComponent;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortPlayerPet : public AActor, public IFortInteractInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaPetItemDefinition* PetItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* PetAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsFrontEndPreview: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponentBudgeted* PetMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* InteractionCollisionSphere;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> SavedMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortTaggedSoundBank* SoundBank;
    
public:
    AFortPlayerPet();
    UFUNCTION(BlueprintCallable)
    void ResetPetMaterials();
    
    UFUNCTION(BlueprintCallable)
    void ReInitPetDisplay();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PetMaterialsOverride();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRequestedCustomizationComplete(AFortPlayerPawn* Pawn);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitalizeFromItemDef(const UAthenaPetItemDefinition* InPetItemDef);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetFortPlayerPawn() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    bool ServerOnAttemptInteract(const FInteractionType& InteractType) override PURE_VIRTUAL(ServerOnAttemptInteract, return false;);
    
};

