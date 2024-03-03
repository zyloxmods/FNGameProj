#pragma once
#include "CoreMinimal.h"
#include "FortPawnComponent.h"
#include "PrimitiveModularCrosstalkInterface.h"
#include "VehicleSeatInputHookProvider.h"
#include "GameplayTagContainer.h"
#include "ERadioSource.h"
#include "SrirachaInputMappingData.h"
#include "SrirachaPerClassSpecialSeats.h"
#include "StreamedRadioEventDelegate.h"
#include "StreamingRadioSourceData.h"
#include "StreamingRadioPlayerComponent.generated.h"

class AActor;
class AController;
class AFortAthenaVehicle;
class AFortPawn;
class AFortWeapon;
class IFortVehicleInterface;
class UFortVehicleInterface;
class UFortMediaPlayerCtrl;
class UFortStreamMediaSource;
class UMediaPlayer;
class UMediaSoundComponent;
class UObject;
class URadioContentSourceItemDefinition;
class USoundMix;
class USrirachaRanchComponentTemplateWrapper;
class UStreamingRadioAudioShapeComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class SRIRACHARANCH_API UStreamingRadioPlayerComponent : public UFortPawnComponent, public IPrimitiveModularCrosstalkInterface, public IVehicleSeatInputHookProvider {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, NoClear, meta=(AllowPrivateAccess=true))
    TMap<FName, FSrirachaInputMappingData> InputMappingData;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamedRadioEvent OnSourceLoading;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamedRadioEvent OnSourcePlayed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamedRadioEvent OnSourceStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamedRadioEvent OnSourceFailed;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamedRadioEvent OnRadioExplicitStop;
    
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PercentAutostartRadio;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> DisabledVehicleList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> ExteriorVolumeMultiplierMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, float> InteriorVolumeMultiplierMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMinimalStateOnPlatform;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DisabledStationList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAutostartOnEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bDisabledForCurrentPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RadioSourceData, meta=(AllowPrivateAccess=true))
    FStreamingRadioSourceData ReplicatedRadioSourceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UMediaSoundComponent* SoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStreamingRadioAudioShapeComponent* AudioShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USrirachaRanchComponentTemplateWrapper* SoundCompTemplateSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    URadioContentSourceItemDefinition* LastSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<URadioContentSourceItemDefinition*> Sources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    URadioContentSourceItemDefinition* FallbackSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FSrirachaPerClassSpecialSeats> SpecialSeatList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMediaPlayer* MediaPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMediaPlayerCtrl* MediaController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStreamMediaSource* LastMediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortStreamMediaSource* IncomingMediaSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERadioSource CurrentMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumRetries;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeoutWhenUnpoweredInMS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FadeoutWhenOwnerBeingDestroyedInMS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFadeoutTimeMS;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 DefaultPlayingIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* SoundMixInside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundMix* SoundMixOutside;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ActivationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentToAttachTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentSocketAttachTo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* DelegateContextObject;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    float MediaStartTimeFromInit;
    
public:
    UStreamingRadioPlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void ToggleRadioActive();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopRadioWithFadeout(int32 Milliseconds);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StopRadio();
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopIfNoDriver(const TScriptInterface<IFortVehicleInterface>& Vehicle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void StartRadio(int32 IdxToPlay, bool bFallbackOverride);
    
private:
    UFUNCTION(BlueprintCallable)
    void SoundMixUpdateWeaponState(AFortWeapon* NewWeapon, AFortWeapon* PrevWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SoundMixUpdateTargetingState(bool bNewIsTargeting);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetInteriorVolume(const TScriptInterface<IFortVehicleInterface>& Vehicle);
    
    UFUNCTION(BlueprintCallable)
    void SetExteriorVolume(const TScriptInterface<IFortVehicleInterface>& Vehicle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayPrevIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayNextIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayDefaultIndex();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnSuccessfulURL(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RadioSourceData();
    
    UFUNCTION(BlueprintCallable)
    void OnPiPPlayerBlockedChanged(bool bPiPPlayerBlocking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPawnExitVehicle(const TScriptInterface<IFortVehicleInterface>& Vehicle, AFortPawn* PlayerPawn, int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPawnExitSeat(const TScriptInterface<IFortVehicleInterface>& Vehicle, AFortPawn* PlayerPawn, int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPawnEnterVehicle(const TScriptInterface<IFortVehicleInterface>& Vehicle, AFortPawn* PlayerPawn, int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPawnEnterSeat(const TScriptInterface<IFortVehicleInterface>& Vehicle, AFortPawn* PlayerPawn, int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnOwningVehicleDied(AFortAthenaVehicle* DeadVehicle, const FGameplayTagContainer& InTags, AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerUnpowered();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerReFueled();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerOutOfFuel();
    
    UFUNCTION(BlueprintCallable)
    void OnOwnerExploded();
    
    UFUNCTION(BlueprintCallable)
    void OnFailedURL(const FString& URL);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnPawnExitVehicle(const TScriptInterface<IFortVehicleInterface>& Vehicle, AFortPawn* PlayerPawn, int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnPawnExitSeat(const TScriptInterface<IFortVehicleInterface>& Vehicle, AFortPawn* PlayerPawn, int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnPawnEnterVehicle(const TScriptInterface<IFortVehicleInterface>& Vehicle, AFortPawn* PlayerPawn, int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable)
    void NativeOnPawnEnterSeat(const TScriptInterface<IFortVehicleInterface>& Vehicle, AFortPawn* PlayerPawn, int32 SeatIndex);
    
    UFUNCTION(BlueprintCallable)
    void MediaReady(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    void MediaPlayed();
    
    UFUNCTION(BlueprintCallable)
    void MediaLoad();
    
    UFUNCTION(BlueprintCallable)
    void MediaFinishedOrClosed();
    
    UFUNCTION(BlueprintCallable)
    void MediaFailedToOpen(const FString& String);
    
    UFUNCTION(BlueprintCallable)
    void MediaExplicitClose(bool bReallyExplicit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingLiveFeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExternalSeat(int32 SeatIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    URadioContentSourceItemDefinition* GetOptionAt(int32 idx) const;
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AuthStopRadio();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AuthSetDisabledForCurrentPlayerState(bool bShouldDisableForCurrentPlayerState);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AuthSaveFadeOutTime(float FadeoutSeconds);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AuthSavedSource(URadioContentSourceItemDefinition* Source);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AuthSaveAutoStart(bool bAutoStart);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void AuthPlayIndex(int32 Index);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void UnbindObjectCallbacksFromAllTaggedDelegates(UObject* Object) override PURE_VIRTUAL(UnbindObjectCallbacksFromAllTaggedDelegates,);
    
    UFUNCTION(BlueprintCallable)
    void UnbindNoParamEventFromTaggedDelegate(const FName DelegateTag, UObject* Object) override PURE_VIRTUAL(UnbindNoParamEventFromTaggedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    void SendTaggedStringPayload(const FName Tag, const FString& Payload) override PURE_VIRTUAL(SendTaggedStringPayload,);
    
    UFUNCTION(BlueprintCallable)
    void SendTaggedObjectPayload(const FName Tag, UObject* Payload) override PURE_VIRTUAL(SendTaggedObjectPayload,);
    
    UFUNCTION(BlueprintCallable)
    void SendTaggedIntPayload(const FName Tag, int32 Payload) override PURE_VIRTUAL(SendTaggedIntPayload,);
    
    UFUNCTION(BlueprintCallable)
    void SendTagAsPayload(const FName Tag) override PURE_VIRTUAL(SendTagAsPayload,);
    
    UFUNCTION(BlueprintCallable)
    FString GetTaggedStringPayload(const FName Tag) override PURE_VIRTUAL(GetTaggedStringPayload, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    UObject* GetTaggedObjectPayload(const FName Tag) override PURE_VIRTUAL(GetTaggedObjectPayload, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetTaggedIntPayload(const FName Tag) override PURE_VIRTUAL(GetTaggedIntPayload, return 0;);
    
    UFUNCTION(BlueprintCallable)
    void BindNoParamEventToTaggedDelegate(const FName DelegateTag, UObject* Object, const FName CallbackEventName) override PURE_VIRTUAL(BindNoParamEventToTaggedDelegate,);
    
};

