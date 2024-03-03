#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "FortGameModePickup.h"
#include "ENitrogenPickupType.h"
#include "ENitrogenScoreReason.h"
#include "NitrogenPickup.generated.h"

class AActor;
class UPrimitiveComponent;
class USphereComponent;

UCLASS(Blueprintable, MinimalAPI)
class ANitrogenPickup : public AFortGameModePickup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENitrogenScoreReason ScoreReason;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USphereComponent* AutoPickupTouchComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENitrogenPickupType NitrogenPickupType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoAllowInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamHidden, meta=(AllowPrivateAccess=true))
    uint8 TeamHidden;
    
public:
    ANitrogenPickup();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamHidden();
    
    UFUNCTION(BlueprintCallable)
    void OnNitrogenPickupOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
};

