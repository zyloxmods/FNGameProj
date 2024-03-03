#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortPawnComponent.h"
#include "AttributeSet.h"
#include "ENitrogenPassengerState.h"
#include "Templates/SubclassOf.h"
#include "NitrogenPassengerPawnComponent.generated.h"

class AFortPlayerPawn;
class ANitrogenFareValueIndicator;
class UAnimationAsset;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNitrogenPassengerPawnComponent : public UFortPawnComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENitrogenPassengerState, UAnimationAsset*> MalePassengerStateAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ENitrogenPassengerState, UAnimationAsset*> FemalePassengerStateAnimationMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bDestroyFareValueIndicatorOnDisable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ANitrogenFareValueIndicator> FareValueIndicatorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FareValueIndicatorOffset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_FareValueIndicator, meta=(AllowPrivateAccess=true))
    ANitrogenFareValueIndicator* FareValueIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PassengerState, meta=(AllowPrivateAccess=true))
    ENitrogenPassengerState PassengerState;
    
public:
    UNitrogenPassengerPawnComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PassengerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_FareValueIndicator();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void ClientPlayDeathEffects();
    
private:
    UFUNCTION(BlueprintCallable)
    void ClientHandleFinishedCharacterCustomization(AFortPlayerPawn* PlayerPawn);
    
};

