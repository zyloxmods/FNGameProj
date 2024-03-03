#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "OnSafeZoneRouteChangedDelegate.h"
#include "SafeZoneRoute.h"
#include "FortAthenaMutator_CustomStormMovement.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_CustomStormMovement : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSafeZoneRouteChanged OnSafeZoneRouteChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSafeZoneRoute> SafeZoneRoutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* PhaseProgressCurve;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_SafeZoneRouteIndex, meta=(AllowPrivateAccess=true))
    int32 SafeZoneRouteIndex;
    
public:
    AFortAthenaMutator_CustomStormMovement();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SafeZoneRouteIndex();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FSafeZoneRoute GetSafeZoneRoute(const FString& ContextString) const;
    
};

