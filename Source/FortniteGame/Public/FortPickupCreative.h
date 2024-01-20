#pragma once
#include "CoreMinimal.h"
#include "FortPickupAthena.h"
#include "FortTeamActorInterface.h"
#include "OnPickupReplicatedDelegate.h"
#include "PickupInstigatorData.h"
#include "FortPickupCreative.generated.h"

class AFortPawn;

UCLASS(Blueprintable)
class AFortPickupCreative : public AFortPickupAthena, public IFortTeamActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_PickupInstigatorIndex, meta=(AllowPrivateAccess=true))
    int32 PickupInstigatorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPickupInstigatorData CachedInstigatorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseOverrideDespawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideDespawnTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPickupReplicated OnAccentColorParamChanged;
    
public:
    AFortPickupCreative();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_PickupInstigatorIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnPickupInstigatorDataRemoved(int32 TrackedIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnPickupInstigatorDataChanged(int32 TrackedIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void GivePickupToPawn(AFortPawn* Pawn, bool DestoryAfterPickup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccentColorParam() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
};

