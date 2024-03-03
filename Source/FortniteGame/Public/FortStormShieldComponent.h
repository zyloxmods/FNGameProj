#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "OnStormShieldStatusChangedDelegate.h"
#include "FortStormShieldComponent.generated.h"

class AActor;
class AFortMissionStormShield;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortStormShieldComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStormShieldStatusChanged OnStormShieldStatusChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bCareAboutEdgeOfStorm;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DistanceFromEdgeOfStormShield;
    
public:
    UFortStormShieldComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void StormShieldDestroyed(AActor* DestroyedActor);
    
    UFUNCTION(BlueprintCallable)
    void StormShieldCreated(AFortMissionStormShield* Shield);
    
    UFUNCTION(BlueprintCallable)
    void OwnerDestroyed(AActor* InOwner);
    
};

