#pragma once
#include "CoreMinimal.h"
#include "EAthenaGamePhaseStep.h"
#include "FortHUDElementWidget.h"
#include "AthenaGamePhaseWidgetBase.generated.h"

class AFortGameState;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;
class UMaterialInterface;
class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaGamePhaseWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* StormComingFontMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StormComingWarningTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TimeText;
    
public:
    UAthenaGamePhaseWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnGameStateSet(AFortGameState* InGameState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGamePhaseStepChanged(EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void HandleGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void HandleCountdownUpdate(int32 TimeRemaining);
    
};

