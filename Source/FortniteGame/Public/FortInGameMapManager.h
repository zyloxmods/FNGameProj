#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "Engine/CurveTable.h"
#include "GameplayTagContainer.h"
#include "Layout/Margin.h"
#include "Fonts/SlateFontInfo.h"
#include "EFortTeam.h"
#include "EMapCaptureMethod.h"
#include "FortInitializationInterface.h"
#include "FortMiniMapInterface.h"
#include "MapLocationRenderData.h"
#include "OnAllowShowMainMapChangedDelegate.h"
#include "OnMapExplorationThresholdReachedDelegate.h"
#include "OnMapFullyExploredDelegate.h"
#include "TeamMapExplorationEvent.h"
#include "TeamMapInfo.h"
#include "Templates/SubclassOf.h"
#include "FortInGameMapManager.generated.h"

class AFortInGameMapManager;
class ASceneCapture2D;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UObject;
class UTexture2D;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortInGameMapManager : public AActor, public IFortInitializationInterface, public IFortMiniMapInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllowShowMainMapChanged OnAllowShowMainMapChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_MapData, meta=(AllowPrivateAccess=true))
    TArray<FTeamMapInfo> MapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ClearAllFog, meta=(AllowPrivateAccess=true))
    uint8 bClearAllFog: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName StaticCaptureCameraName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MapLayerSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin MapMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASceneCapture2D> SceneCaptureClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ASceneCapture2D> SceneCaptureBlurryClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MapMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* MapMaterialMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapOpacityWhenWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IconVisibilityFogThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayBetweenDispersions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExploredRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExploredFalloffRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeenRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SeenFalloffRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibilityMaxGradient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnexploredOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle CloudBrightnessCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle DesaturationFactorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxPercentageMapExplored;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapExplorationThresholdPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastMapExplorationThresholdPercentageReached;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMapFullyExplored OnMapFullyExplored;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMapExplorationThresholdReached OnMapExplorationThresholdReached;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMapCaptureMethod MapCaptureMethod;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASceneCapture2D* SceneCapture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ASceneCapture2D* SceneCaptureBlurry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* FogMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* HeatmapMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MapWorldScale;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultMapLocationFontColor[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo DefaultMapLocationFont;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MobileMapLocationFontSizeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FSlateFontInfo MapLocationFont;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMapLocationRenderData> MinimapLocationRenderData_Player1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FMapLocationRenderData> MinimapLocationRenderData_Player2;
    
public:
    AFortInGameMapManager();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    bool ShouldShowMainMap();
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureLocation(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void SetActorBoundaryData(float UpperZ, float LowerZ, const TArray<TSubclassOf<AActor>>& ClassesToHide);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void ServerClearAllFog();
    
    UFUNCTION(BlueprintCallable)
    void ResetCaptureLocation();
    
    UFUNCTION(BlueprintCallable)
    void PaintOnFog(const FVector& WorldCoords, TEnumAsByte<EFortTeam::Type> Team);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_MapData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ClearAllFog();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetStaticCaptureSetupComplete();
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHeatmapMaskScale() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTexture2D* GetHeatmapMask() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static AFortInGameMapManager* GetCurrent(const UObject* WorldContextObject);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void BroadcastExplorationEvents(const TArray<FTeamMapExplorationEvent>& Events);
    
public:
    UFUNCTION(BlueprintCallable)
    FVector2D BPWorldLocationToMapLocation(const FVector& WorldLocation, float InMapSize);
    
    UFUNCTION(BlueprintCallable)
    void AllowShowMiniMap(bool bAllowShow);
    
    UFUNCTION(BlueprintCallable)
    void AllowShowMainMap(bool bAllowShow);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

