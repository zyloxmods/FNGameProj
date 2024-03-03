#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "OnSkyTubeStateChangedDelegate.h"
#include "FortSkyTubePhysicsComponent.generated.h"

class AFortSkyTube;
class UPrimitiveComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortSkyTubePhysicsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTubeSpeed;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTubeAcceleration;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMagnetizeWhenNotInSkytube;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkyTubeStateChanged OnEnteredSkyTube;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkyTubeStateChanged OnChangedSkyTube;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSkyTubeStateChanged OnExitedSkyTube;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SkyTube, meta=(AllowPrivateAccess=true))
    AFortSkyTube* SkyTube;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortSkyTube* PrevSkyTube;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Magnetized, meta=(AllowPrivateAccess=true))
    bool bMagnetized;
    
public:
    UFortSkyTubePhysicsComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetMagnetization(const bool bInMagnetized);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_SkyTube(AFortSkyTube* PreviousSkyTube);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Magnetized(bool bPreviousMagnetized);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSkyTubeForceEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMagnetized() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInSkyTube() const;
    
    UFUNCTION(BlueprintCallable)
    void ExitSkyTube(AFortSkyTube* InSkyTube);
    
    UFUNCTION(BlueprintCallable)
    void EnterSkyTube(AFortSkyTube* InSkyTube);
    
    UFUNCTION(BlueprintCallable)
    void ComputeAccelerations(const float DeltaTime, UPrimitiveComponent* PrimComp, FVector& OutLinearAcceleration, FVector& OutAngularAccelerationRad);
    
};

