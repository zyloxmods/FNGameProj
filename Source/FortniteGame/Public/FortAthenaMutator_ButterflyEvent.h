#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "FortAthenaMutator.h"
#include "OnButterflyPawnBroadcastDelegate.h"
#include "FortAthenaMutator_ButterflyEvent.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_ButterflyEvent : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButterflyPawnBroadcast OnPawnBroadcast;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PawnGatherFrequency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PawnSpawnLocationX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PawnSpawnLocationY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PawnSpawnMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat PawnSpawnMaxDistance;
    
public:
    AFortAthenaMutator_ButterflyEvent();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePawnBroadcasting();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopGatheringPawns();
    
    UFUNCTION(BlueprintCallable)
    void StartGatheringPawns();
    
};

