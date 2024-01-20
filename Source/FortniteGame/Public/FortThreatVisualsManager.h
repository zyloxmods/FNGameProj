#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "FortInitializationInterface.h"
#include "StormWindArray.h"
#include "Templates/SubclassOf.h"
#include "ThreatLocationArray.h"
#include "ThreatLocationInfo.h"
#include "FortThreatVisualsManager.generated.h"

class AThreatCloud;

UCLASS(Blueprintable)
class AFortThreatVisualsManager : public AActor, public IFortInitializationInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AThreatCloud> CloudBlueprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatBoxVolumeTopPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThreatBoxVolumeBottomPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLocalPlayersOnlyForCloudMinimumHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_HideClouds, meta=(AllowPrivateAccess=true))
    bool bHideClouds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudMinimumHeightAbovePlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudMinimumHeightAboveGround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudMinimumAltitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudMaxVerticalDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudMinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CloudMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormWindCloudRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormWindGoalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormWindFalloffRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormWindInactiveMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormWindActiveMagnitude;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormWindDesiredDeltaBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormWindDirectionAdditionalAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_ThreatLocations, meta=(AllowPrivateAccess=true))
    FThreatLocationArray ThreatLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_StormWinds, meta=(AllowPrivateAccess=true))
    FStormWindArray StormWindArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_GoalActorLocations, meta=(AllowPrivateAccess=true))
    TArray<FVector> GoalActorLocations;
    
public:
    AFortThreatVisualsManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool StormsExist() const;
    
    UFUNCTION(BlueprintCallable)
    void SetMinimumCloudAltitude(float NewMinimumAltitude);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetCloudsAreHidden(bool bHide);
    
    UFUNCTION(BlueprintCallable)
    void ResetMinimumCloudAltitude();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWorldReady();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnThreatCloudsChanged(const TArray<FThreatLocationInfo>& ThreatLocationInfo);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ThreatLocations();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_StormWinds();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_HideClouds();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_GoalActorLocations();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintImplementableEvent)
    void OnBeginThreatVisualsPrecursor(AActor* SourceActor, const FVector& EndLocation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FThreatLocationInfo> GetThreatClouds() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AThreatCloud* GetThreatCloud(const FThreatLocationInfo& ThreatLocInfo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCloudsAreHidden() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BeginThreatVisualsPrecursor(AActor* SourceActor, FVector ThreatLocation);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

