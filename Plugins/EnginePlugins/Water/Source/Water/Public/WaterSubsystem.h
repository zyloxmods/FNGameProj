#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "OnCameraUnderwaterStateChangedDelegate.h"
#include "OnWaterScalabilityChangedDelegate.h"
#include "WaterSubsystem.generated.h"

class AWaterMeshActor;
class UMaterialParameterCollection;

UCLASS(Blueprintable, Transient)
class WATER_API UWaterSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCameraUnderwaterStateChanged OnCameraUnderwaterStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWaterScalabilityChanged OnWaterScalabilityChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AWaterMeshActor* WaterMeshActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialParameterCollection* MaterialParameterCollection;
    
public:
    UWaterSubsystem();
    UFUNCTION(BlueprintCallable)
    void SetOceanFloodHeight(float InFloodHeight);
    
    UFUNCTION(BlueprintCallable)
    void PrintToWaterLog(const FString& Message, bool bWarning);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaterRenderingEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderwaterPostProcessEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsShallowWaterSimulationEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSmoothedWorldTimeSeconds() const;
    
    UFUNCTION(BlueprintCallable)
    static int32 GetShallowWaterSimulationRenderTargetSize();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetShallowWaterMaxImpulseForces();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetShallowWaterMaxDynamicForces();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOceanTotalHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOceanFloodHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOceanBaseHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCameraUnderwaterDepth() const;
    
};

