#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameFramework/OnlineReplStructs.h"
#include "AthenaRemotePlayerViewData.generated.h"

class AActor;
class AFortPlayerPawn;
class AFortPlayerStateAthena;
class AFortWeapon;
class UAthenaRemotePlayerViewData;

UCLASS(Blueprintable)
class UAthenaRemotePlayerViewData : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWeaponDelegate, UAthenaRemotePlayerViewData*, PlayerData, AFortWeapon*, WeaponParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FUInt8Delegate, UAthenaRemotePlayerViewData*, PlayerData, uint8, IntParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTwoFloatDelegate, UAthenaRemotePlayerViewData*, PlayerData, float, FloatParam, float, FloatParamMax);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FStringDelegate, UAthenaRemotePlayerViewData*, PlayerData, const FString&, StringParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerStateDelegate, UAthenaRemotePlayerViewData*, PlayerData, AFortPlayerStateAthena*, PlayerState);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPawnDelegate, UAthenaRemotePlayerViewData*, PlayerData, AFortPlayerPawn*, PawnParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLinearColorDelegate, UAthenaRemotePlayerViewData*, PlayerData, FLinearColor, ColorParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FIntDelegate, UAthenaRemotePlayerViewData*, PlayerData, int32, IntParam);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FBoolDelegate, UAthenaRemotePlayerViewData*, PlayerData, bool, BoolParam);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerStateDelegate OnPlayerStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColorDelegate OnTeamColorChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUInt8Delegate OnSquadIdChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringDelegate OnPlayerNameChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnKillScoreChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStringDelegate OnLocationChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoFloatDelegate OnHealthHealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoFloatDelegate OnHealthDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoFloatDelegate OnShieldHealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoFloatDelegate OnShieldDamaged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnDBNOStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnDeadStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnBeingRevivedStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnDisconnectedChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPawnDelegate OnPlayerPawnChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FWeaponDelegate OnWeaponChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnDistanceToStormChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnPlaceChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntDelegate OnMaterialCountChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnIsInRelevancyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnIsFollowedPlayerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBoolDelegate OnIsReplayRelevancyPlayerChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoFloatDelegate OnVehicleHealthHealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTwoFloatDelegate OnVehicleHealthDamaged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawn* CachedPlayerPawn;
    
public:
    UAthenaRemotePlayerViewData();
    UFUNCTION(BlueprintCallable)
    void UpdatePlayerPawn();
    
    UFUNCTION(BlueprintCallable)
    void UpdateDistanceToStorm();
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerState(AFortPlayerStateAthena* InPlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVehicleMaxHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVehicleHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVehicleHealth() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetTeamColor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    uint8 GetSquadID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShieldPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetShield(float& Shield, float& ShieldMax) const;
    
    UFUNCTION(BlueprintCallable)
    FUniqueNetIdRepl GetPlayerUID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerStateAthena* GetPlayerState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPlayerPawn* GetPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPlace() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaterialCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetKillScore() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsReplayRelevancyPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsInRelevancy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsFollowedPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsEliminated() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDrivingVehicle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDisconnected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDead() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsDBNO() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsBeingRevived() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetInAircraft() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthPercent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetHealth(float& Health, float& HealthMax) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDistanceToStorm() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortWeapon* GetCurrentWeapon() const;
    
private:
    UFUNCTION(BlueprintCallable)
    void ForwardOnWeaponChanged(AFortWeapon* InNewWeapon, AFortWeapon* InPrevWeapon);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnVehicleStateChanged(AFortPlayerPawn* PlayerPawn, AActor* NewVehicle, AActor* OldVehicle);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnVehicleHealthChanged();
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnSquadIdChanged(uint8 InSquadId);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnPlayerNameChanged(AFortPlayerStateAthena* InPlayerState, const FString& InPlayerName);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnPlaceChanged(AFortPlayerStateAthena* Sender, int32 InPlace);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnLocationChanged(const FString& InLocation);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnKillScoreChanged(AFortPlayerStateAthena* InPlayerState, int32 InKillScore);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnHitPointsStateChanged(AFortPlayerStateAthena* InPlayerState, float InHealth, float InHealthMax, float InShield, float InShieldMax);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnDisconnectedChanged(AFortPlayerStateAthena* InPlayerState, bool bInIsDisconnected);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnDeadStateChanged(AFortPlayerStateAthena* InPlayerState, bool bInIsDead);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnDBNOStateChanged(AFortPlayerStateAthena* InPlayerState, bool bInIsDBNO);
    
    UFUNCTION(BlueprintCallable)
    void ForwardOnBeingRevivedStateChanged(AFortPlayerStateAthena* InPlayerState, bool bInIsBeingRevived);
    
};

