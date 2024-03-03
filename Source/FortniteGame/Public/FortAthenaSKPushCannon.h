#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "FortAthenaSKPushVehicle.h"
#include "FortAthenaSKPushCannon.generated.h"

class AFortPawn;
class AFortPlayerPawn;
class UCameraShake;
class UPhysicalMaterial;

UCLASS(Blueprintable)
class AFortAthenaSKPushCannon : public AFortAthenaSKPushVehicle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MainPhysicsProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float MovementParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BatteryParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float RumbleIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraShake* DriverCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCameraShake* PassengerCameraShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector PlayerTorque;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerTorquingRepped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bPlayerTorquing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CannonBoneIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PushCannonNoSleepPhysicsMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPhysicalMaterial* PushCannonPhysicsMaterial;
    
    AFortAthenaSKPushCannon();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowCooldownCue(AFortPlayerPawn* Pawn, float Duration);
    
public:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPassengerTorquing(bool bSetTo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPushCannonFired(int32 ShotsRemaining, bool bLaunchingPlayer);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreLaunchPawn(AFortPlayerPawn* Pawn, const FVector LaunchDir);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostExitVehicle(AFortPawn* ExitingPawn, const int32 SeatIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchPawn(AFortPlayerPawn* Pawn, const FVector LaunchDir);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MultiCastPushCannonLaunchedPlayer();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetCurrentWorldAimOrientationCorrected() const;
    
};

