#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "EAthenaGamePhase.h"
#include "EGlobalWeatherState.h"
#include "GlobalWeatherData.h"
#include "FortTimeOfDayWeatherComponent.generated.h"

class UPostProcessComponent;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortTimeOfDayWeatherComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGlobalWeatherData> GlobalWeatherDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WeatherEventStartDelayMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WeatherEventStartDelayMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WeatherEventEndedCooldownMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat WeatherEventEndedCooldownMax;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWeatherDisabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaGamePhase GamePhaseToStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWeatherStarted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEnableEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EGlobalWeatherState WeatherState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeatherEventEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float WeatherEventAttemptStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_WeatherEventIndex, meta=(AllowPrivateAccess=true))
    int32 WeatherEventIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LocalWeatherEventIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentWeatherEventIntensity, meta=(AllowPrivateAccess=true))
    float CurrentWeatherEventIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float CurrentBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TargetBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float BlendTimeLength;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UPostProcessComponent* PostProcessComponent;
    
public:
    UFortTimeOfDayWeatherComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_WeatherEventIndex();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentWeatherEventIntensity();
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWeatherEventActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentWindStrength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentWindDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentWeatherIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentWeatherEventIndex() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBlendTimePercentage() const;
    
};

