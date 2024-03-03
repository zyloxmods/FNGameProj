#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "SafeZoneOrderOptimizeMutatorRouteDefinition.h"
#include "SafeZoneOrderOptimizeMutatorRouteOrder.h"
#include "FortAthenaMutator_SafeZoneOrderOptimize.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_SafeZoneOrderOptimize : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumRouteOrdersToChooseFrom;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat NumRouteOrdersPerFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxPercentDeviationFromBestRoute;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bPaused;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<FSafeZoneOrderOptimizeMutatorRouteDefinition> Routes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 MaxRoutesPerOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<int32> LockedInRouteIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ChosenRouteOrder, meta=(AllowPrivateAccess=true))
    FSafeZoneOrderOptimizeMutatorRouteOrder ChosenRouteOrder;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapUILineThickness;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FSafeZoneOrderOptimizeMutatorRouteOrder DebugShortestRouteOrder;
    
public:
    AFortAthenaMutator_SafeZoneOrderOptimize();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ChosenRouteOrder();
    
};

