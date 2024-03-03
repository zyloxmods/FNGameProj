#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortControllerComponent_HasCoupledWidgets.h"
#include "PoiDiscoverabilityDataArray.h"
#include "FortControllerComponent_MapDiscoverability.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UMaterialParameterCollection;
class UTextureRenderTarget2D;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_MapDiscoverability : public UFortControllerComponent_HasCoupledWidgets {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* DiscoverabilityMPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DiscoveryUnmaskDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFlipYInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DiscoveryUnmaskUpdateRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTextureRenderTarget2D> DiscoveryRenderTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> StencilMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    FPoiDiscoverabilityDataArray DiscoveredData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* StencilMID;
    
public:
    UFortControllerComponent_MapDiscoverability();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void UndiscoverAllPois();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void UndiscoverAllLandmarks();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void UndiscoverAllAreas();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void TeleportToAllLocations(float DelayBetween);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetDiscoverStatusByTag(const FString& Tag, bool bDiscovered);
    
public:
    UFUNCTION(BlueprintCallable)
    void PlaylistLoadedStub(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags);
    
    UFUNCTION(BlueprintCallable)
    void EventsReadyStub(const TArray<FString>& Events);
    
private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void DiscoverAllPois();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void DiscoverAllLandmarks();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void DiscoverAllAreas();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void CancelTeleportToAllLocations();
    
};

