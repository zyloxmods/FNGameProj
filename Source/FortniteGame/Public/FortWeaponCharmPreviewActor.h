#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CharmPreviewEntry.h"
#include "CosmeticPreviewInterface.h"
#include "EFortCustomCharmType.h"
#include "FortUICameraFrameTargetInterface.h"
#include "FortWeaponCharmPreviewActor.generated.h"

class AFortPlayerCharm;
class UAthenaCharmItemDefinition;
class USkeletalMesh;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class AFortWeaponCharmPreviewActor : public AActor, public IFortUICameraFrameTargetInterface, public ICosmeticPreviewInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FCharmPreviewEntry CurrentEntryInfo;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaCharmItemDefinition* MyCharm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerCharm* MyCharmActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponAttachMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortCustomCharmType::Type> CharmSlot;
    
public:
    AFortWeaponCharmPreviewActor();
protected:
    UFUNCTION(BlueprintCallable)
    void StartLoadingNextPreviewActor(int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetActiveCharmSlot(int32 CharmSlotIn);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PreviewCharm(const UAthenaCharmItemDefinition* Charm);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreviewSkeletalMeshLoaded(USkeletalMesh* LoadedMesh, const FCharmPreviewEntry& EntryInfo);
    
    UFUNCTION(BlueprintCallable)
    void ClearCharm();
    
    UFUNCTION(BlueprintCallable)
    void ApplyCharmToSkelMesh(USkeletalMeshComponent* MeshComp);
    
    
    // Fix for true pure virtual functions not being implemented
};

