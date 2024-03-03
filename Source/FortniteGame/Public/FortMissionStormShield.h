#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Styling/SlateBrush.h"
#include "FortSafeZoneInterface.h"
#include "OnStormShieldReachedTargetLocationDelegate.h"
#include "OnStormShieldReachedTargetRadiusDelegate.h"
#include "StormShieldMoveData.h"
#include "StormShieldRadiusGrowthData.h"
#include "Templates/SubclassOf.h"
#include "FortMissionStormShield.generated.h"

class AFortMissionStormSafeZone;
class UEnvQuery;
class UFortStormShieldComponent;
class UGameplayEffect;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class USceneComponent;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortMissionStormShield : public AActor, public IFortSafeZoneInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* ShieldRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> SafeFromStormPlayerEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> InStormPlayerEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> SafeFromStormEnemyEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> InStormEnemyEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapWorldScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ReplicatedRadius, meta=(AllowPrivateAccess=true))
    float ReplicatedRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_RadiusGrowthData, meta=(AllowPrivateAccess=true))
    FStormShieldRadiusGrowthData RadiusGrowthData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FStormShieldMoveData MoveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool UseGrowthRateDirectly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    bool bAntiStormShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RadiusToWorldScaleConversion;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStormShieldReachedTargetRadius OnStormShieldReachedRadius;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStormShieldReachedTargetLocation OnStormShieldReachedLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortMissionStormSafeZone> SafeAreaTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* StormShieldQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrentLocalRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StormMiniMapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StormMiniMapMaterialMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush StormMiniMapMaterialBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StormMainMapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StormMainMapMaterialMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush StormMainMapMaterialBrush;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    TArray<AFortMissionStormSafeZone*> SafeAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortStormShieldComponent*> StormShieldComponents;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRegisterWithGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AutoHideRadius;
    
public:
    AFortMissionStormShield();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void UpdateRadiusVisuals();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AFortMissionStormSafeZone* SpawnSafeAreaAtLocation(const FVector& InLocation, const float InRadius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetRadiusSizeChangeOverGrowthRate(const float InTargetRadius, const float InGrowthRate, bool bUseGrowthRateDirectly);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTargetLocationToMoveTo(const FVector InTargetLocation, const float InMoveRate);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetRadiusOfShield(const float InRadius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool RemoveAndDestroySafeArea(AFortMissionStormSafeZone* AreaToRemove);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PauseStormShield();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_ReplicatedRadius();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_RadiusGrowthData();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    bool IsInStormShield(FVector TestLocation) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void InitializeRadiusValue(const float InRadius);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSafeZones(TArray<AFortMissionStormSafeZone*>& OutSafeZones);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DestroyStormShield();
    
    
    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    FVector GetSafeZoneNextNextCenter() const override PURE_VIRTUAL(GetSafeZoneNextNextCenter, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    FVector GetSafeZoneNextCenter() const override PURE_VIRTUAL(GetSafeZoneNextCenter, return FVector{};);
    
};

