#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Styling/SlateBrush.h"
#include "Styling/SlateColor.h"
#include "CarriedObjectAttachmentInfo.h"
#include "FortCarriedObjectInterface.h"
#include "FortInteractInterface.h"
#include "FortTeamActorInterface.h"
#include "InteractionType.h"
#include "FortCarriedObject.generated.h"

class ABuildingFlagSpawn;
class UProjectileMovementComponent;

UCLASS(Abstract, Blueprintable)
class AFortCarriedObject : public AActor, public IFortCarriedObjectInterface, public IFortTeamActorInterface, public IFortInteractInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProjectileMovementComponent* ProjectileComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_HolderInfo, meta=(AllowPrivateAccess=true))
    FCarriedObjectAttachmentInfo HolderInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector IndicatorRelativeOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush Indicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateColor DefaultIndicatorColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector RelativeTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RelativeRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPickupOnTouch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    uint8 Team;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    ABuildingFlagSpawn* SpawnPointActor;
    
public:
    AFortCarriedObject();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ReturnToSpawnPoint();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_HolderInfo(FCarriedObjectAttachmentInfo& PreviousInfo);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetHoldingActor() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
    UFUNCTION()
    bool ServerOnAttemptInteract(const FInteractionType& InteractType) override PURE_VIRTUAL(ServerOnAttemptInteract, return false;);
    
};

