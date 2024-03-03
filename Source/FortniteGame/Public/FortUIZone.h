#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "EFortContextualReticleTypes.h"
#include "FortUIBaseClass.h"
#include "FortUIZone.generated.h"

class UFortSpottedActorIndicator;
class UReporterGraph;
class USlateBrushAsset;
class UTexture2D;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortUIZone : public AFortUIBaseClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFontRenderInfo TextRenderInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReporterGraph* IntensityGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReporterGraph* PIDValuesGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReporterGraph* PIDContributionsGraph;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReporterGraph* UtilitiesGraph;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortContextualReticleTypes> CurrentContextualReticleIconType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FColor CurrentContextualReticleColor;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> ContextualReticleIcons[8];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USlateBrushAsset> ActorCanvasArrowBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortSpottedActorIndicator*> SpottedActorIndicators;
    
public:
    AFortUIZone();
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTargetInfoSensing();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTargetInfoPaths();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTargetInfoLock(bool bTraceComplex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTargetInfoAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTargetInfo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentCursorModeAction();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseFullScreenMap();
    
};

