#pragma once
#include "CoreMinimal.h"
#include "OnCornerstoneDamagedDelegate.h"
#include "OnCornerstoneOutOfHealthDelegate.h"
#include "StrategicBuildingActor.h"
#include "FortPvPBaseCornerstone.generated.h"

UCLASS(Blueprintable)
class AFortPvPBaseCornerstone : public AStrategicBuildingActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_bInvincible, meta=(AllowPrivateAccess=true))
    uint8 bInvincible: 1;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCornerstoneDamaged OnCornerstoneDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCornerstoneOutOfHealth OnCornerstoneOutOfHealth;
    
public:
    AFortPvPBaseCornerstone();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetInvincibility(bool bInInvincible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_bInvincible();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnInvincibilityChanged(bool bIsInvincible);
    
};

