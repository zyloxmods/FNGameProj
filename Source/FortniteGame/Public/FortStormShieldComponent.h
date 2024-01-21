#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "OnStormShieldStatusChangedDelegate.h"
#include "FortStormShieldComponent.generated.h"

class AActor;
class AFortMissionStormShield;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortStormShieldComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStormShieldStatusChanged OnStormShieldStatusChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromEdgeOfStormShield;
    
public:
    UFortStormShieldComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void StormShieldDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void StormShieldCreated(AFortMissionStormShield* Shield);
    
    UFUNCTION(BlueprintCallable)
    void OwnerDestroyed(AActor* InOwner);
    
};

